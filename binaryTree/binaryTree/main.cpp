#include "binary.h"

void main() {
  Node* root = new Node;
  Node* llr = new Node;
  Node* lrr = new Node;
  Node* rl = new Node;
  Node* rr = new Node;
  Node* ll = new Node;
  Node* lr = new Node;
  Node* l = new Node;
  Node* r = new Node;
  root -> key = 5; root -> left = l; root -> right = r; root->parent = NULL;
  llr->key = 1; llr->left = NULL; llr->right = NULL; llr->parent = ll;
  lrr->key = 4; lrr->left = NULL; lrr->right = NULL; lrr->parent = lr;
  rl->key = 6; rl->left = NULL; rl->right = NULL; rl->parent = r;
  rr->key = 8; rr->left = NULL; rr->right = NULL; rr->parent = r;
  ll->key = 0; ll->left = NULL; ll->right = llr; ll->parent = l;
  lr->key = 3; lr->left = NULL; lr->right = lrr; lr->parent = l;
  l->key = 2; l -> left = ll; l -> right = lr; l->parent = root;
  r->key = 7; r -> left = rl; r -> right = rr; r->parent = root;
  int* arr = new int[9];
  arr = printd(root); //printr(root);//prints(root);
  system("pause");
}
