///*
// * assignment1_c.cpp
// *
// *  Created on: Sep 29, 2021
// *      Author: Daphne
// */
////Daphne McWilliams, COSC 600
////Uses method 3 (O(N) algorithm) to find the majority element of an array.
////The find_majority function gets the majority occurring the most times in an array based on Moore's voting algorithm.
////The double_check function makes sure that this element is in fact the majority element.
////The print_majority function prints the element if it is true that it is the majority element.
//
//
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <ctime>
//
//using namespace std;
//
//int find_majority(vector<int> &a){
//
//	int maj_index = 0;
//	int count = 0;
//	//Maintains a counter and remembers an element in the array.
//	//Processes array one element at a time.
//	//If counter = 0, the current element is stored and the counter is incremented.
//	//If the counter is not 0, the element is compared to the next one.
//	//If they are equal, counter is incremented.
//	//If they are different, counter is decremented.
//	//New value is stored.
//	//And so on.
//
//	for (int i = 0; i < a.size(); i++){
//		if (a[maj_index] == a[i])
//			count++;
//		else
//			count--;
//		if (count == 0){
//			maj_index = i;
//			count = 1;
//		}
//	}
//	return a[maj_index];
//
//}
//bool double_check(vector<int> &a, int element){
//	//Double checks majority element obtained in find_majority.
//	//Returns value of 1(true) or false (0).
//
//	int count = 0;
//	for (int i = 0; i < a.size(); i++)
//		if (a[i] == element)
//			count++;
//	if (count >= a.size() / 2)
//		return 1;
//	else
//		return 0;
//}
//
//void print_majority(vector<int> &a){ //function to print majority element
//
//	int element = find_majority(a);
//	if (double_check(a, element) == true)
//		cout << "The majority element is " << element << "." << endl;
//	else
//		cout << "There is no majority element in this array.";
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
//	}
//
//	double time_req = clock();
//	print_majority(numbers);
//	time_req = clock() - time_req;
//	cout << "Time taken by program is : " << time_req/CLOCKS_PER_SEC << " seconds." << endl;
//
//}
//
//
//
