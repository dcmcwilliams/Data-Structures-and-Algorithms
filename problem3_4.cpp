/*
 * problem3_4.cpp
 *
 *  Created on: Dec 2, 2021
 *      Author: Daphne
 */
// Daphne McWilliams COSC 600: A program to radix sort 5000 random integers between 0 and 50000. Prints first and last 100 elements of sorted array.

#include <iostream>
#include <ctime>
using namespace std;

int getMax(int arr [], int size){
	int max = arr[0];
	for (int i = 0; i < size; i++){
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

void countSort(int arr[], int size, int place){ //Count sorts array of size n based on digit represented by place.
	int max = getMax(arr, size);
	int sort[size];
	int count[max];

	// Initializes array of zeros.
	for (int i = 0; i < max; ++i)
	    count[i] = 0;

	// Finds count of each digit in nth place and stores in count array
	for (int i = 0; i < size; i++)
	    count[(arr[i] / place) % 10]++;

	// Finds cumulative count
	for (int i = 1; i < max; i++)
		count[i] += count[i - 1];

	// Places the elements in sorted order in sort array.
	for (int i = size - 1; i >= 0; i--) {
		sort[count[(arr[i] / place) % 10] - 1] = arr[i];
	    count[(arr[i] / place) % 10]--;
	}
	// Copies sorted elements into original array.
	for (int i = 0; i < size; i++)
	    arr[i] = sort[i];
}

void radixSort(int arr[], int size){ // Main function to radix sort an array of n size.
	int max = getMax(arr, size);

	//Does count sort for every digit based on place value.
	for (int place = 1; max / place > 0; place *= 10)
		countSort(arr, size, place);
}

void printArrayFront(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void printArrayBack(int arr[], int size, int stop) {
	for (int i = size - 1; i >= stop; i--)
    cout << arr[i] << " ";
  cout << endl;
}

int main(){
	int array[5000]; //generates an array of 5000 random numbers between 0 and 50,000
	srand((unsigned)time(NULL));
	cout << "Creating an array of 5000 random numbers..." << endl;
	for (int i = 0; i < 5000; i++){
		array[i] = rand() % 50000;
	}

	radixSort(array, 5000);
	cout << "The first 100 elements of the array after radix sorting: " << endl;
	printArrayFront(array, 100);
	cout << endl;

	cout << "The last 100 elements of the array after radix sorting (from back to front): " << endl;
	printArrayBack(array, 5000, 4900);
	cout << endl;

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}

