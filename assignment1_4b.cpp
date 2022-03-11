///*
// * assignment1_4b.cpp
// *
// *  Created on: Sep 30, 2021
// *      Author: Daphne
// */
////Daphne McWilliams, COSC 600
////Uses algorithm 2 (θ(N^2)) to calculate the maximum subsequence sum.
////Subsequence sum is calculated and checked against the max so far.
////Adds next element to sum to calculate next subsequence summation.
//
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int max_sub2 (int arr[], int n){
//
//	int max_sum = 0;
//
//	for (int i = 0; i < n; i++){
//		int this_sum = 0;
//		for (int j = 0; j < n; j++){
//			this_sum += arr[j];
//
//			if (this_sum > max_sum)
//				max_sum = this_sum;
//		}
//	}
//	return max_sum;
//}
//
//
//
//int main() {
//
//	int n;
//	cout << "Enter the size of the array" << endl;
//	cin >> n;
//
//	int rand_array[n];
//	for(int i = 0; i < n; i++)
//		rand_array[i] = rand()%10000 - 5000;
//
//	double time_req = clock();
//	cout << "The maximum subsequence sum of this array is " << max_sub2(rand_array, n) << "." << endl;
//	time_req = clock() - time_req;
//	cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//}
