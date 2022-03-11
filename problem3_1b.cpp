/*
 * problem3_1b.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: Daphne
 */

// Daphne McWilliams COSC 600: Program to sort an array of 5000 random integers into a binary heap (linear time algorithm).
// Displays first 50 elements of heap and number of swaps.

#include <iostream>
#include <ctime>
using namespace std;

// Utility function to swap two elements.
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

class binHeap {
    int *heap_arr; // pointer to array of elements in heap
    int capacity; // maximum possible size of binary heap
    int heap_size; // Current number of elements in binary heap

public:
    int swaps; // keeps track of number of swaps

    // Constructor
    binHeap(int capacity);

    // Heapifies a subtree with the root at given index
    void heapify(int i);

    void buildHeap(int capacity);

    int parent(int i) { return (i-1)/2; }

    // Gets index of left child of node at index i
    int left(int i) { return (2*i + 1); }

    // Gets index of right child of node at index i
    int right(int i) { return (2*i + 2); }

    // Extracts the root, which is the minimum element
    int extractMin();

    // Inserts a new value 'k'
    void insertVal(int k);
};

// Constructor: Builds a heap from a given array of given size
binHeap::binHeap(int cap) {
    heap_size = 0;
    capacity = cap;
    heap_arr = new int[cap];
    swaps = 0;
}

// Inserts a new value 'k' into heap
void binHeap::insertVal(int k) {
    if (heap_size == capacity) {
        cout << "Overflow: Could not insert key." << endl;
        return;
    }
    heap_size++;
    int i = heap_size - 1;
    heap_arr[i] = k;
}

// Method to remove minimum element (or root) from heap
int binHeap::extractMin() {
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1) {
        heap_size--;
        return heap_arr[0];
    }

    // Store the minimum value, and remove it from heap
    int root = heap_arr[0];
    heap_arr[0] = heap_arr[heap_size-1];
    heap_size--;
    heapify(0);

    return root;
}


// Recursive method to heapify a subtree with the root at given index.
void binHeap::heapify(int i) {
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && heap_arr[l] < heap_arr[i])
		smallest = l;
	if (r < heap_size && heap_arr[r] < heap_arr[smallest])
		smallest = r;
	if (smallest != i) {
		swap(&heap_arr[i], &heap_arr[smallest]);
	    heapify(smallest);
	    swaps++;
	}
}

// Function to build a binary heap from a given array
void binHeap::buildHeap(int n) {
    // Index of last non-leaf node
    int startIdx = (n / 2) - 1;

    // Perform reverse level order traversal
    // from last non-leaf node and heapify
    // each node
    for (int i = startIdx; i >= 0; i--) {
        heapify(i);
    }
}

int main() {
	binHeap heap(5000);
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5000; i++){
		int b = rand() % 50000;
		heap.insertVal(b);
	}
	heap.buildHeap(5000);

	cout << "The first 50 elements of an array of 5000 random integers sorted into a binary heap: " << endl;
	for (int i = 0; i < 50; i++)
		cout << heap.extractMin() << " ";
	cout << endl << endl;
	cout << "Total number of swaps: " << heap.swaps << endl << endl;

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program is: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}
