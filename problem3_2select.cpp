/*
 * problem3_2select.cpp
 *
 *  Created on: Nov 30, 2021
 *      Author: Daphne
 */
//Daphne McWilliams COSC 600: Program to selection sort an array of 5000 random integers. Prints first 100 elements of sorted array.

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n){ //Function to selection sort array of size n.
	int min, temp;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for(int j = i + 1; j < n; j++){
			if (arr[j] < arr[min])
				min = j;
		}
		if(min != i){
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
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

	selectionSort(array, 5000);
	cout << "The first 100 elements of the array after selection sorting: " << endl;
	printArray(array, 100);

	double time_req = clock();
	time_req = clock() - time_req;
	cout << "Time taken by program: " << time_req/CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}



