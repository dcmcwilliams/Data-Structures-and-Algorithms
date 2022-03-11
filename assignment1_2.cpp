///*
// * magicsquare.cpp
// *
// *  Created on: Sep 29, 2021
// *      Author: Daphne
// */
//
////Daphne McWilliams, COSC 600
////This program creates a magic square for any odd integer.
////It will always begin by placing 1 in the middle of the top row
////and move diagonally upwards to the right until the square is filled.
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void create_magic_square(int n)
//{
//    int magic_square[n][n];
//    int current_row, current_col;
//
//    for (int i = 0; i < n ; i++){ //Initializes an array of zeros
//    	for (int j = 0 ; j < n; j++)
//    		magic_square[i][j] = 0;
//    }
//
//    int i = 0;
//    int j = n/2; //Finds starting point (middle of top row)
//
//    for (int num = 1; num <= n * n;) { //Begins filling array with values from 1 to n x n
//    	current_row = i;
//    	current_col = j;
//
//    	//The program will move up diagonally to the right one row and column at a time,
//    	//UNLESS the following conditions are met.
//
//        if (i < 0 && j == n) //If program reaches last column of the top row, moves to first column of bottom row
//        {
//            j = 0;
//            i = n-1;
//        }
//        else {
//
//            if (j == n) //If program reaches last column, move to first column (row continues to move up by 1)
//                j = 0;
//            if (i < 0) //If program reaches top row, move to bottom row (column continues to move to the right by 1)
//                i = n - 1;
//
//        }
//        if (magic_square[i][j] != 0) //If square is already filled, n + 1 is placed directly beneath n.
//        	//Not sure why this step worked. It was the only way I could get the program to behave how I wanted.
//        {
//            i = current_row + 2;
//            j = current_col - 1;
//            continue;
//        }
//        else //Fills the square by moving up diagonally to the right.
//            magic_square[i][j] = num++;
//
//        j++;
//        i--;
//    }
//
//    cout << "Your " << n << " x " << n << " magic square is below:" << endl << endl; //prints magic square
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++)
//            cout << setw(4) << magic_square[i][j];
//        cout << endl;
//    }
//    cout << endl;
//}
//
//int main()
//{
//
//    int n;
//    char c;
//    cout << "Would you like to create a magic square?(Y/N)" << endl;
//    cin >> c;
//    while (c == 'Y' || c == 'y')
//    {
//    	cout << "Enter a positive odd integer for the size of your magic square." << endl;
//    	cin >> n;
//    	while (n % 2 == 0 || n < 0){
//    		cout << "Invalid number!" << endl;
//    		cout << "Enter a positive odd integer for the size of your magic square." << endl;
//    		cin >> n;
//    	}
//    	create_magic_square(n);
//    	cout << "Would you like to make another?" << endl;
//    	cin >> c;
//    }
//    cout << "OK, goodbye!" << endl;
//    return 0;
//}
//
//
