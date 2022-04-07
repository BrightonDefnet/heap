#include <iostream>
#include "Heap.h"
using namespace std;

int main() {
    Heap* h = new Heap();

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    h->createHeap(arr, n);
    h->print(arr, n);
}
