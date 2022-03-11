///*
// * assignment1_3a.cpp
// *
// *  Created on: Sep 28, 2021
// *      Author: Daphne
// */
//
////Daphne McWilliams, COSC 600
////This program is Method 1 (O(N^2) algorithm) of finding the majority element of an array.
////It uses two loops to keep track of the count for all different elements.
////The loops breaks once the count for an element becomes greater than n / 2.
////If no number occurs more than n / 2 times, than no majority element exists.
//
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <ctime>
//
//
//using namespace std;
//
//void find_majority(vector<int> &a){
//
//	int count = 0;
//	int maj_el;
//
//	for (int i = 0; i < a.size(); i++){
//		for (int j = 0; j < a.size(); j++){
//			if (a[i] == a[j])
//				count++;
//				}
//			}
//			if (count > a.size() / 2)
//				cout << "The majority element is " << a[maj_el] << "." << endl;
//			else
//				cout << "There is no majority element in this array." << endl;
//
//}
//
//int main (){
//
//	vector<int> numbers;
//	int num;
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
//		cout << "Searching for the majority element..." << endl;
//		double time_req = clock();
//		find_majority(numbers);
//		time_req = clock() - time_req;
//		cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//
//	}
//
//
//
//
//}
//
