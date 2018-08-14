CFLAGS = g++ -O2 -std=c++14 -Wall -Wextra

fileformat:
	cd protofiles && protoc osmformat.proto --cpp_out=./

osmformat:
	cd protofiles && protoc fileformat.proto --cpp_out=./

prepare_protoc: fileformat osmformat

parse.o: prepare_protoc src/parse.cpp
	$(CFLAGS) -I /usr/ -L /usr/lib src/parse.cpp protofiles/fileformat.pb.cc protofiles/osmformat.pb.cc -lprotobuf -pthread -lz -o parse.o

parse: parse.o
	time ./parse.o maps/bremen-latest.osm.pbf
