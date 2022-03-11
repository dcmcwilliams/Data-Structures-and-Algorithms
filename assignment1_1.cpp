///*
// * assignment1_1.cpp
// *
// *  Created on: Sep 27, 2021
// *      Author: Daphne
// */
////Daphne McWilliams, COSC 600
////This is a program for converting a decimal n to a binary number using recursion.
////The program repeatedly halves n by integer division and runs a recursion on n
////and outputs the remainder of n/2 (either 1 or 0).
////This process continues until n = 1.
////1/2 = 0 through integer division, so the program comes to an end.
//
//#include <iostream>
//using namespace std;
//
//void binaryconvert (int decimal)
//{
//	if (decimal == 0)
//		cout << 0; //if decimal = 0, outputs 0
//	else {
//		binaryconvert(decimal / 2 ); //recursion call
//		cout << decimal % 2; //outputs either 0 or 1 depending on whether n is odd or even
//	}
//}
//
//int main()
//{
//	int decimal;
//	cout << "Enter a positive decimal number to be converted to binary." << endl;
//	cin >> decimal;
//	cout << "The binary number is: ";
//	binaryconvert(decimal);
//
//}
//
