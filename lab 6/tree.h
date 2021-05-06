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
private:
    void insert(Node*& n, int d)
    {
        if (d < n->data)
        {
            if (n->left)
                insert(n->left, d);
            else
                n->left = new Node(d);
        }
        else if (d > n->data)
        {
            if (n->right)
                insert(n->right, d);
            else
                n->right = new Node(d);
        }
    }

public:
    Node* root;

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

    void insert(int d)
    {
        if (root == NULL)
            root = new Node(d);
        else
            insert(root, d);

    }
};