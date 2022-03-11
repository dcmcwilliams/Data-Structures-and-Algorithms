/*
 * problem3_2merge.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: Daphne
 */
// Daphne McWilliams COSC 600: Program to merge sort an array of 5000 random integers. Prints first 100 integers of sorted array.

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int l, int m, int r) { //Merges sorted subarrays into single sorted array.
	int i = l;
	int j = m + 1;
	int k = l;
	int temp[5000];

	while (i <= m && j <= r) {
		if (arr[i] <= arr[j]) {
		temp[k] = arr[i];
		i++;
		k++;
		}
		else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	while (i <= m) { // Copy the remaining elements of first half, if there are any.
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= r) { // Copy the remaining elements of second half, if there are any.
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (int p = l; p <= r; p++) {  // Copy the temporary array to original array.
		arr[p] = temp[p];
	}
}

void mergeSort(int arr[], int l, int r) {//Divide and conquer: Repeatedly divides array into smaller sub arrays for sorting.
	if (l < r) { // find midpoint
		int m = (l + r) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	int array[5000]; //generates an array of 5000 random numbers between 0 and 50,000
	srand((unsigned)time(NULL));
	cout << "Creating an array of 5000 random numbers..." << endl;
	for (int i = 0; i < 5000; i++){
		array[i] = rand() % 50000;
	}

	mergeSort(array, 0, 5000);
	cout << "The first 100 elements of the array after merge sorting: " << endl;
	printArray(array, 100);

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}






