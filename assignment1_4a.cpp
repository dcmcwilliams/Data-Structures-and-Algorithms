///*
// * assignment1_4.cpp
// *
// *  Created on: Sep 30, 2021
// *      Author: Daphne
// */
////Daphne McWilliams, COSC 600
////Uses algorithm 1 (θ(n^3)) to calculate the maximum subsequence sum
////of a randomly generated array.
////Moves through the array, calculating each subsequence sum separately.
////Keeps track of maximum value.
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int max_sub1(int arr[], int n)
//{
//	int max_sum = 0;
//	for (int i = 0; i < n; i++)
//		for (int j = i; j < n; j++)
//		{
//			int this_sum = 0;
//			for (int k = 1; k <=j; k++)
//				this_sum += arr[k];
//			if (this_sum > max_sum)
//				max_sum = this_sum;
//		}
//	return max_sum;
//}
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
//	cout << "The maximum subsequence sum of this array is " << max_sub1(rand_array, n) << "." << endl;
//	time_req = clock() - time_req;
//	cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//}
//
//
//
