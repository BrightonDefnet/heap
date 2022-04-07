all: heap

heap: main.o Heap.o
	g++ -g -o heap main.o Heap.o

main.o: main.cpp
	g++ -g -c main.cpp

Heap.o: Heap.cpp Heap.h
	g++ -g -c Heap.cpp
