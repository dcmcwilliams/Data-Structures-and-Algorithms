///*
// * assignment1_4c.cpp
// *
// *  Created on: Sep 30, 2021
// *      Author: Daphne
// */
//
////Daphne McWilliams, COSC 600
////Uses algorithm 3 (θ(nlogn)) to calculate maximuum subsequence sum.
////Uses a divide and conquer approach.
////max_sub3 finds the maximum subsequence sums for the left, right, and center of the array.
////max_3 compares these three sums to find the true maximum subsequence sum of the entire array.
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int max_3 (int a, int b, int c){
//
//	return max(max(a, b), c);
//
//}
//
//int max_sub3(int arr[], int l, int r)
//{
//	if (l == r){
//		if (arr[l] > 0)
//			return arr[l];
//		else
//			return 0;
//	}
//	int center = (l + r) / 2;
//	int max_l_sum = max_sub3(arr, l, center);
//	int max_r_sum = max_sub3(arr, center + 1, r);
//
//	int max_lborder_sum = 0, lborder_sum = 0;
//	for (int i = center; i >= l; i--)
//	{
//		lborder_sum += arr[i];
//		if (lborder_sum > max_lborder_sum)
//			max_lborder_sum = lborder_sum;
//	}
//
//	int max_rborder_sum = 0, rborder_sum = 0;
//	for (int i = center + 1; i <= r; i++)
//	{
//		rborder_sum += arr[i];
//		if (rborder_sum > max_rborder_sum)
//			max_rborder_sum = rborder_sum;
//	}
//
//	return max_3(max_l_sum, max_r_sum, max_lborder_sum + max_rborder_sum);
//
//}
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
//	cout << "The maximum subsequence sum of this array is " << max_sub3(rand_array, 0, n-1) << "." << endl;
//	time_req = clock() - time_req;
//	cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//}
//
