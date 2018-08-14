#include <iostream>
#include <fstream>
#include <string>
#include <netinet/in.h>

#include "../protofiles/fileformat.pb.h"
#include "../protofiles/osmformat.pb.h"

#include <zlib.h>
#include <sstream>
#include <stdexcept>

using namespace google::protobuf::io;

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stringstream;

string decompress(const string& str)
{
    z_stream zs;                        // z_stream is zlib's control structure
    memset(&zs, 0, sizeof(zs));

    if (inflateInit(&zs) != Z_OK)
        throw(std::runtime_error("inflateInit failed while decompressing."));

    zs.next_in = (Bytef*)str.data();
    zs.avail_in = str.size();

    int ret;
    char outbuffer[32768];
    string outstring;

    // get the decompressed bytes blockwise using repeated calls to inflate
    do {
        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
        zs.avail_out = sizeof(outbuffer);

        ret = inflate(&zs, 0);

        if (outstring.size() < zs.total_out) {
            outstring.append(outbuffer,
                             zs.total_out - outstring.size());
        }

    } while (ret == Z_OK);

    inflateEnd(&zs);

    if (ret != Z_STREAM_END) {          // an error occurred that was not EOF
        std::ostringstream oss;
        oss << "Exception during zlib decompression: (" << ret << ") "
            << zs.msg;
        throw(std::runtime_error(oss.str()));
    }

    return outstring;
}

int main(int argc, char* argv[])
{
    GOOGLE_PROTOBUF_VERIFY_VERSION;
  
    std::ios_base::sync_with_stdio(false);
    
    if (argc != 2)
    {
        cerr << "Usage:  " << argv[0] << " *.osm.pbf file" << endl;
        return -1;
    }
    
    std::ifstream input(argv[1], std::ios::in | std::ios::binary);
  
    char * citaj = new char[318103808];
    
    while(!input.eof())
    {
        uint32_t kolko;
        input.read ((char*)&kolko, sizeof(kolko));
        kolko = ntohl(kolko);
        
        input.read(citaj, kolko);
        
        if(input.eof()) break;
        
        OSMPBF::BlobHeader header;
        if ( !header.ParseFromString(string(citaj, kolko)) )
        {
            cerr << "Failed to parse BlobHeader." << endl;
            return -1;
        }
    
        uint32_t mess_size = header.datasize();
        
        input.read(citaj, mess_size);
    
        OSMPBF::Blob mess;
        if ( !mess.ParseFromString(string(citaj, mess_size)) )
        {
            cerr << "Failed to parse Blob." << endl;
            return -1;
        }
        
        string data = mess.raw();
        string ozajstne = decompress(mess.zlib_data());
        
        if(header.type() == "OSMHeader")
        {
            //cout << "Header type1\n";
        }
        else if(header.type() == "OSMData")
        {
            //cout << "Header type2\n";
            
            OSMPBF::PrimitiveBlock primitiveblock;
            if ( !primitiveblock.ParseFromString(ozajstne))
            {
                cerr << "Failed to parse PrimitiveBlock." << endl;
                return -1;
            }
            
            auto group =  primitiveblock.primitivegroup();
                
                for(const auto& grouptypes : group)
                {
                    // parsing way
                    for(const auto& way : grouptypes.ways())
                    {
                        long long b = 0;
                        for(const long long a : way.refs())
                        {
                            cout << a+b << endl;
                            b = a+b;
                        }
                    }
                    
                    // parsing densenodes
                    long long b = 0;
                    for(const long long xx : grouptypes.dense().id())
                    {
                        cout << xx+b << endl;
                        b += xx;
                    }
                    
                    for(auto node : grouptypes.nodes())
                    {
                        cout << "hh" << node.id() << endl;
                    }
                }

        }
        else
        {
            cerr << "Bad header type" << endl;
            return -1;
        }
    }
        
    google::protobuf::ShutdownProtobufLibrary();
    
    return 0;
}
