#ifndef SOLUTIONS_BINARYTREE_BINARYTREE_BINARY_H_
#define SOLUTIONS_BINARYTREE_BINARYTREE_BINARY_H_
#include <iostream>
#include <stack>

struct Node {
  int key;
  Node* left;
  Node* right;
  Node* parent;
};

int* printd(Node* root);
int* printr(Node* root);
int* prints(Node* root);
#endif  // SOLUTIONS_BINARYTREE_BINARYTREE_BINARY_H_
