///*
// * assignment1_4d.cpp
// *
// *  Created on: Sep 30, 2021
// *      Author: Daphne
// */
////Daphne McWilliams, COSC 600
////Uses algorithm 4 (θ(n)) to find the maximum subsequence sum.
////max_sub4 adds each number from left to right and stores the sum in this_sum.
////The sum is set to 0 if a negative number is encountered and restarts at the next number.
//
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int max_sub4(int arr[], int n){
//
//	int max_sum = 0, this_sum = 0;
//
//	for (int j = 0; j < n; j++)
//	{
//		this_sum += arr[j];
//		if (this_sum > max_sum)
//			max_sum = this_sum;
//		else if (this_sum < 0)
//			this_sum = 0;
//	}
//
//	return max_sum;
//}
//
//int main() {
//
//	int n;
//	cout << "Enter the size of the array:" << endl;
//	cin >> n;
//
//	int rand_array[n];
//	for(int i = 0; i < n; i++)
//		rand_array[i] = rand()%10000 - 5000;
//
//	double time_req = clock();
//	cout << "The maximum subsequence sum of this array is " << max_sub4(rand_array, n) << "." << endl;
//	time_req = clock() - time_req;
//	cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//}
//
