#pragma once
#include<iostream>

using namespace std;
#define COUNT 10 

class Node
{
public:
    int data;
    Node* left, * right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {
public:

    void print2D(Node* root, int space)
    {
        // Base case 
        if (root == NULL)
            return;

        // Increase distance between levels 
        space += COUNT;

        // Process right child first 
        print2D(root->right, space);

        // Print current node after space 
        // count 
        cout << endl;
        for (int i = COUNT; i < space; i++)
            cout << " ";
        cout << root->data << "\n";

        // Process left child 
        print2D(root->left, space);
    }

    void OutputTree(Node* root)
    {
        print2D(root, 0);
    }

};