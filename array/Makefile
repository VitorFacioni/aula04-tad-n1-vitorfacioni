CC = clang
CFLAGS = -Wall -pedantic

all: main opaque_test

build:
	mkdir -p build

array.o: build array.c 
	$(CC) $(CFLAGS) array.c -c -o build/array.o
	$(CC) $(CFLAGS) element.c -c -o build/element.o

main: build array.o main.c
	$(CC) $(CFLAGS) main.c build/array.o build/element.o -o build/main

opaque_test: array.o
	$(CC) $(CFLAGS) opaque_test.c build/array.o build/element.o -o build/opaque_test

clean:
	rm -rf build

run: main
	./build/main