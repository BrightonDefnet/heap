#ifndef HEAP_H
#define HEAP_H
#include <iostream>
using namespace std;

class Heap {
    public:
        Heap();
        void toHeap(int arr[], int n, int i);
        void createHeap(int arr[], int n);
        void print(int arr[], int n);

    private:
};

#endif
