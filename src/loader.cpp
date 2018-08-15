#include <iostream>
#include <fstream>

using std::cin;
using std::cout;

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    std::ifstream nodes_input("../parsed_maps/nodes.txt", std::ios::in);
    std::ifstream ways_input("../parsed_maps/ways.txt", std::ios::in);
    
    cout << "Loading parsed nodes!\n";
    
    long long size, lat_offset, lon_offset, granularity;
    long long id=0, lat=0, lon=0, id_d, lat_d, lon_d, real_lat, real_lon;
    
    while(nodes_input >> size >> lat_offset >> lon_offset >> granularity)
    {
        id = 0, lat = 0, lon = 0;
        for(int i=0;i<size;++i)
        {
            nodes_input >> id_d >> lat_d >> lon_d;
            id += id_d;
            lat += lat_d;
            lon += lon_d;
            
            real_lat = (lat_offset + (granularity * lat))/100000000LL;
            real_lon = (lon_offset + (granularity * lon))/100000000LL;
            
            cout << real_lat << " " << real_lon << "\n";
        }
    }
    cout << "Nodes parsed successfully!\n";
    
    ////////////////////////////////////////////////////////////////////////////
    
    cout << "Loading parsed ways!\n";
    
    while(ways_input >> size)
    {
        id = 0;
        for(int i=0;i<size;++i)
        {
            ways_input >> id_d;
            id += id_d;
            
            cout << id << "\n";
        }
    }
    cout << "Ways parsed successfully!\n";
    
    return 0;
}
