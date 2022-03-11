/*
 * problem3_2bubble.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: Daphne
 */

//Daphne McWilliams COSC 600: Program to bubble sort an array of 5000 random integers and print first 100 integers.

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n) { // Function to bubble sort array of size n.
	int temp;
	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if (arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int array[5000]; //generates an array of 5000 random numbers between 0 and 50,000
	srand((unsigned)time(NULL));
	cout << "Creating an array of 5000 random numbers..." << endl;
	for (int i = 0; i < 5000; i++){
		array[i] = rand() % 50000;
	}

	bubbleSort(array, 5000);
	cout << "The first 100 elements of the array after bubble sorting: " << endl;
	printArray(array, 100);

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}


