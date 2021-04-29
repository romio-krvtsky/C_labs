#include<iostream>
#include"tree.h"

int main()
{
    BST tr;

    Node* root = new Node(49);
    root->left = new Node(28);
    root->right = new Node(83);

    root->left->left = new Node(18);
    root->left->right = new Node(40);
    root->right->left = new Node(71);
    root->right->right = new Node(97);

    root->left->left->left = new Node(11);
    root->left->left->right = new Node(19);
    root->left->right->left = new Node(32);
    root->left->right->right = new Node(44);
    root->right->left->left = new Node(69);
    root->right->left->right = new Node(72);
    root->right->right->left = new Node(92);
    root->right->right->right = new Node(99);

    tr.OutputTree(root);

    return 0;
}