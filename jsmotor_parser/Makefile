all: static
# if you didn't do `sudo make install` by json-c 0.9, you'll need to add your own paths
# to json.json.h and libjson.so - something like -I/usr/local/include/ -L/usr/local/lib
static:
	gcc -static -o jsmotor_parser_static_exe jsmotor_parser.c -ljson
shared:
	gcc -o jsmotor_parser_shared_exe jsmotor_parser.c -L/usr/local/lib -ljson
clean:
	rm -r -f *.o
	rm *_exe
.PHONY: all static shared
