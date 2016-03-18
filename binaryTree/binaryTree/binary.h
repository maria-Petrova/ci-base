#pragma once
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