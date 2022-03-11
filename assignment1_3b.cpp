///*
// * assignment1_3b.cpp
// *
// *  Created on: Sep 29, 2021
// *      Author: Daphne
// */
////Daphne McWiliams, COSC 600
////This program uses method 2 (O(nlogn) algorithm), the divide and conquer method, to find the majority element.
////The get_frequency function calculates the frequency of an element.
////It takes the left and right ends of the current array as parameters.
////The get_majority function recursively calculates the majority element in the right and left halves
////And stores them in the variables left_majority and right_majority, respectively.
////It then calls get_frequency on each half, and returns the value with maximum frequency.
//
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <ctime>
//
//using namespace std;
//
//int get_frequency(vector<int> &a, int l, int r, int element)
//{
//	int count = 0;
//	for (int i = l; i <= r; i++)
//	{
//		if (a[i] == element)
//		{
//			count++;
//		}
//	}
//	return count; //Returns count of majority element in array with specified left and right end point.
//}
//
//int get_majority(vector<int> &a, int l, int r) {
//
//	if (l == r)
//		return a[l];
//	int mid = l + (r - l) / 2; //finds mid-point, then divides array into left and right halves
//	int left_majority = get_majority(a, l, mid); //Calls recursion on halves.
//	int right_majority = get_majority(a, mid + 1, r);
//	if (left_majority == right_majority)
//		return left_majority; //if the majority element is the same in both halves,
//							//then we can assume it is the majority element for the entire array.
//
//	int left_freq = get_frequency(a, l , r, left_majority); //gets frequency for majority element in each half.
//	int right_freq = get_frequency(a, l , r, right_majority);
//
//	if (left_freq > right_freq) //returns majority element, if it exists.
//		return left_majority;
//	else if (right_freq > left_freq)
//		return right_majority;
//	else
//		return 0;
//
//}
//
//
//int main (){
//
//	vector<int> numbers;
//	int num;
//
//
//	ifstream infile;
//	infile.open("Majex4.txt");
//	if (infile.fail()){
//		cout << "Input file failed to open.";
//		exit(1);
//	}
//	else{
//		while (infile >> num){
//			numbers.push_back(num);
//		}
//		infile.close();
//
//		cout << "Searching for the majority element..." << endl;
//		double time_req = clock();
//		cout << "The majority element is " << (get_majority(numbers, 0, numbers.size() - 1)) << "!" << endl;
//		time_req = clock() - time_req;
//		cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//	}
//}
