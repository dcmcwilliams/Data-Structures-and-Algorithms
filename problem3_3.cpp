/*
 * poblem3_3.cpp
 *
 *  Created on: Dec 2, 2021
 *      Author: Daphne
 */
// Daphne McWilliams COSC 600: Program to count sort 5000 random integers between 0 and 300. Prints first 100 elements of sorted array.

#include <iostream>
#include <ctime>
using namespace std;

void countSort(int arr[], int size) { //Function to count sort array of size n.
	int count[size + 1];
	int sort[size + 1];
	int max = arr[0];

	for (int i = 1; i < size; i++) { // Finds largest element of array
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i <= max; ++i) // Initializes array with zeros
		count[i] = 0;

	for(int i = 0; i < size; i++) // Stores count of each element
		count[arr[i]]++;

	for (int i = 1; i <= max; i++) // Stores cumulative count of each array
	    count[i] += count[i - 1];

	  // Find the index of each element of the original array in count array, and
	  // place the elements in sort array
	for (int i = size - 1; i >= 0; i--) {
	    sort[count[arr[i]] - 1] = arr[i];
	    count[arr[i]]--;
	  }

	  // Copy the sorted elements into original array
	for (int i = 0; i < size; i++)
	    arr[i] = sort[i];
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
	int array[5000]; //generates an array of 5000 random numbers between 0 and 300.
	srand((unsigned)time(NULL));
	cout << "Creating an array of 5000 random numbers..." << endl;
	for (int i = 0; i < 5000; i++){
		array[i] = rand() % 300;
	}

	countSort(array, 5000);
	cout << "The first 100 elements of the array after count sorting: " << endl;
	printArray(array, 100);

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}

