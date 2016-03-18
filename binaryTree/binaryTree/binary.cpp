#include "binary.h"

void print(Node* n) {
  std::stack <Node*> st;
  st.push(n);
  while (!st.empty()) {
    Node* tmp = st.top();
    st.pop();
    std::cout << tmp->key;
    if (tmp->right != 0)
      st.push(tmp->right);
    if (tmp->left != 0)
      st.push(tmp->left);
  }
}

void printobr(Node* n) {
  std::stack <Node*> st;
  st.push(n);
  while(!st.empty()) {
    if(n)
     if (n)
  }
}
