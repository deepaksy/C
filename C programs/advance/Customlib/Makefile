CC=clang
CFLAGS=-Wall -g

all:librarytest


libmycode.o:libmycode.c mycode.h

$(CC) $(CFLAGS) -C libmycode.C


librarytest: librarytest.c libmycode.o
$(CC) $(CFLAGS) -o $@ $^