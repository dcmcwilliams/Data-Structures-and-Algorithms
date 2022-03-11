/*
 * Problem2_insert.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: Daphne
 */

// Daphne McWilliams COSC 600: Program to insertion sort an array of 5000 random integers. Prints first 100 elements of sorted array.

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int n) { //Function to insertion sort array of size n.
	for (int i = 1; i < n; i++) {
	    int key = arr[i];
	    int j = i - 1;
	    while (key < arr[j] && j >= 0){
	      arr[j + 1] = arr[j];
	      --j;
	    }
	    arr[j + 1] = key;
	 }
}

int main() {
	int array[5000]; //generates an array of 5000 random numbers between 0 and 50,000
	srand((unsigned)time(NULL));
	cout << "Creating an array of 5000 random numbers..." << endl;
	for (int i = 0; i < 5000; i++){
		array[i] = rand() % 50000;
	}

	insertionSort(array, 5000);
	cout << "The first 100 elements of the array after insertion sorting: " << endl;
	printArray(array, 100);

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}




