#include <iostream>
#include "Heap.h"
using namespace std;

int main() {
    Heap* h = new Heap();
    int arr[100];
    int i = 0;
    bool running = true;
    string entry;

    while(running) {
        cout << "enter 'num', 'file', or 'heap'" << endl;
        cin >> entry;
        if(entry == "num") {
            cout << "enter a number" << endl;
            cin >> arr[i];
        } else if(entry == "file") {
            cout << "getting file" << endl;
        } else if(entry == "heap") {
            int n = sizeof(arr) / sizeof(arr[0]);
            h->createHeap(arr, n);
            h->print(arr, n);
        }
    }
}
