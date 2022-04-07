#include "Heap.h"
#include <array>

Heap::Heap(){}

///turn a tree into a heap
void Heap::toHeap(int arr[], int n, int i) {
    int max = i; //initializes largest integer as the root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[max]) { //if left is more than root, set left to the new max
        max = left;
    }

    if(right < n && arr[right] > arr[max]) { //if right is more than root, set right to the new max
        max = right;
    }

    if(max != i) { //if the max is not equal to i
        swap(arr[i], arr[max]); //swap them if not equal
        toHeap(arr, n, max); //recursively sort into a heap
    }
}

///create the heap
void Heap::createHeap(int arr[], int n) {
    int start = (n / 2) - 1; //start at half of the size - 1
    for(int i = start; i >= 0; i--) { //sort the array into a heap
        toHeap(arr, n, i);
    }
}

///print the heap
void Heap::print(int arr[], int n) {
    for(int i = 0; i < n; i++) { //print the max heap
        cout << arr[i] << "  ";
        if(i==0||i==2||i==6||i==14||i==30||i==62) {
            cout << "\n";
        }
    }
    cout << "\n" << endl;
}
