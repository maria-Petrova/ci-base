#ifndef BINARYTREE_BINARYTREE_BINARY_H_
#define BINARYTREE_BINARYTREE_BINARY_H_
#include <iostream>
#include <stack>

struct Node {
  int key;
  Node* left;
  Node* right;
  Node* parent;
};

void print(Node* n);
void ptintobr(Node* n);
#endif
