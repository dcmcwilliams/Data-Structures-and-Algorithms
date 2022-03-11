///*
// * Assignment2_1.cpp
// *
// *  Created on: Nov 1, 2021
// *      Author: Daphne
// */
//
////Daphne McWilliams COSC 600: Program to generate random BST and calculate average depth.
//
//#include <iostream>
//using namespace std;
//
//class Node { //Each node of the BST has a data value and pointers to its left and right children.
//
//public:
//	int data;
//	Node *left;
//	Node *right;
//};
//
//Node* new_node(int data){ //Creates first node of tree.
//	Node* node = new Node();
//	node->data = data;
//	node->left = NULL;
//	node->right = NULL;
//	return node;
//}
//
//Node* insert(Node* node, int data){ //Function to insert nodes into tree.
//	if(node == NULL) //If the node is empty, inserts value.
//		return new_node(data);
//	else if(data < node->data) // If new value is less than current node, inserts to left subtree.
//		node->left = insert(node->left, data);
//	else if //If new value is greater than current node, inserts to right subtree.
//		node->right = insert(node->right, data);
//	else //Duplicate values not permitted.
//		return node;
//}
//
//float total_depth(Node* node, float accum) { //Function to calculate total depth of all the nodes in the BST.
//    if (node == NULL) {
//        return 0;
//    }
//    return accum + total_depth(node->left, accum + 1) + total_depth(node->right, accum + 1);
//}
//
//float avg_depth(float total){ //Function to calculate average depth of the BST.
//	return total/5000;
//}
//
//
//int main (){
//	Node *root = NULL; // Creates empty tree.
//	int total = 5000; //total number of nodes in tree;
//	srand(time(NULL));
//	for(int i = 0; i < total; i++) {
//	     int val = rand() % 50000 + 1; //Generates random number between 1 and 50,000 and inserts in tree.
//	     root = insert(root, val);
//	}
//
//	cout << "Total depth: " << total_depth(root, 0) << " " << endl;
//	cout << "Average depth: " << avg_depth(total_depth(root, 0)) << endl;
//
//}
//
//
//
//
