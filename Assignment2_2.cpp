///*
// * assignment2_2.cpp
// *
// *  Created on: Nov 4, 2021
// *      Author: Daphne
// */
//
/////Daphne McWilliams COSC 600: Program to generate random AVL tree and calculate average depth of nodes and # of rotations.
//
//#include <iostream>
//using namespace std;
//
//class Node //Node of AVL tree with data field and pointers to left and right children.
//{
//    public:
//    int data;
//    Node *left;
//    Node *right;
//    int height; //Keeps track of height for balancing purposes.
//    int single_rotations; //Keeps track of single rotations.
//    int double_rotations; //Keeps track of double rotations.
//};
//
//int height(Node *N){
//    if (N == NULL)
//        return 0;
//    return N->height;
//}
//
//int single_count(Node *node){
//    if (node == NULL)
//        return 0;
//    return node->single_rotations;
//}
//
//int double_count(Node *node){
//    if (node == NULL)
//        return 0;
//    return node->double_rotations;
//}
//
//int max(int a, int b){
//   if (a > b)
//	   return a;
//   else
//	   return b;
//}
//
//Node* new_node(int data){
//    Node* node = new Node();
//    node->data = data;
//    node->left = NULL;
//    node->right = NULL;
//    node->height = 1; // New node is initially added at leaf
//    node->single_rotations = 0;
//    node->double_rotations = 0;
//    return(node);
//}
//
//Node *right_right_rotate(Node *y) //Performs single rotation (insertion into right tree of right child).
//{
//    Node *x = y->left;
//    Node *T2 = x->right;
//
//    x->right = y;
//    y->left = T2;
//
//    y->height = max(height(y->left), height(y->right)) + 1; //Updates heights.
//    x->height = max(height(x->left), height(x->right)) + 1;
//    x->single_rotations++;
//
//    return x; //Returns new root
//}
//
//
//Node *left_left_rotate(Node *x) //Performs single rotation (insertion into left tree of left child).
//{
//    Node *y = x->right;
//    Node *T2 = y->left;
//
//    y->left = x;
//    x->right = T2;
//
//    x->height = max(height(x->left), height(x->right)) + 1; //Updates heights.
//    y->height = max(height(y->left), height(y->right)) + 1;
//    x->single_rotations++;
//
//    return y; //Returns new root
//}
//
//Node *left_right_rotate(Node *x) //Performs double rotation (insertion into left tree of right child).
//{
//    Node *y = x->right;
//    Node *T2 = y->left;
//
//    y->left = x;
//    x->right = T2;
//
//    x->height = max(height(x->left), height(x->right)) + 1; //Updates heights after first rotation.
//    y->height = max(height(y->left), height(y->right)) + 1;
//
//    x->right = y;
//    y->left = T2;
//
//    y->height = max(height(y->left), height(y->right)) + 1; //Updates heights after second rotation.
//    x->height = max(height(x->left), height(x->right)) + 1;
//    x->double_rotations++;
//
//    return x; //Returns new root
//}
//
//Node *right_left_rotate(Node *y) //Performs double rotation (insertion into right tree of left child).
//{
//    Node *x = y->left;
//    Node *T2 = x->right;
//
//    x->right = y;
//    y->left = T2;
//
//    y->height = max(height(y->left), height(y->right)) + 1; //Updates heights after first rotation.
//    x->height = max(height(x->left), height(x->right)) + 1;
//
//    y->left = x;
//    x->right = T2;
//
//    x->height = max(height(x->left), height(x->right)) + 1; //Updates heights after second rotation.
//    y->height = max(height(y->left), height(y->right)) + 1;
//    x->double_rotations++;
//
//    return y; //Returns new root
//}
//
//int get_balance(Node *N) //Checks balance factor of parent after insertion of new node.
//{
//    if (N == NULL)
//        return 0;
//    return height(N->left) - height(N->right);
//}
//
//Node* insert(Node* node, int data){
//	if (node == NULL) //Performs normal BST insertion.
//        return new_node(data);
//	else if (data < node->data)
//        node->left = insert(node->left, data);
//    else if (data > node->data)
//        node->right = insert(node->right, data);
//    else // Duplicate values not permitted.
//        return node;
//
//    node->height = 1 + max(height(node->left), height(node->right)); //Updates height of parent node.
//
//    int balance = get_balance(node); //Checks balance factor of parent.
//
//    //If the node has become unbalanced, then use rotations below.
//
//    if (balance > 1 && data < node->left->data) //Insertion into left tree of left child (single rotation).
//    	return right_right_rotate(node);
//
//    if (balance < -1 && data > node->right->data) //Insertion into right tree of right child (single rotation).
//        return left_left_rotate(node);
//
//    if (balance > 1 && data > node->left->data) //Insertion into left tree of right child (double rotation).
//        return right_left_rotate(node);
//
//    if (balance < -1 && data < node->right->data) //Insertion into right tree of left child (double rotation).
//        return left_right_rotate(node);
//
//    return node;
//}
//
//double total_depth(Node *node, double sum) { //Calculates total depth of nodes.
//    if (node == NULL)
//        return 0;
//    return sum + total_depth(node->left, sum + 1) + total_depth(node->right, sum + 1);
//}
//
//double avg_depth(double total) { //Calculates average depth of nodes.
//	return total/5000;
//}
//
//int main() {
//    Node *root = NULL;
//    int total = 5000;
//    srand(time(NULL));
//    for(int i = 0; i < total; i++) {//Generates random number between 1 and 50,000 and inserts into AVL tree.
//    	int val = rand() % 50000 + 1;
//    	root = insert(root, val);
//    }
//
//    cout << "Average depth of the tree is: " << avg_depth(total_depth(root, 0)) << endl;
//    cout << "Number of single rotations: " << single_count(root) << endl;
//    cout << "Number of double rotations: " << double_count(root) << endl;
//
//    return 0;
//}
//
//
//
//
//
//
//
