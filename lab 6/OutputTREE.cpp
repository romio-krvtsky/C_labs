#include<iostream>
#include"tree.h"

int main()
{
    BST tr1;
    Node* r = new Node(49);
    tr1.root = r;
    tr1.insert(49);
    tr1.insert(28);
    tr1.insert(83);
    tr1.insert(18);
    tr1.insert(40); 
    tr1.insert(71);
    tr1.insert(97);
    tr1.insert(11);
    tr1.insert(19);
    tr1.insert(32);
    tr1.insert(44);
    tr1.insert(69);
    tr1.insert(92);
    tr1.insert(99);
    tr1.OutputTree(r);

    return 0;
}