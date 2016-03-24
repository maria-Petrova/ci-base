#include "binary.h"

int* printd(Node* n) {
  int* arr = new int[9];
  int i = 0;
  std::stack <Node*> st;
  st.push(n);
  std::cout << "direct order: ";
  while (!st.empty()) {
    Node* tmp = st.top();
    st.pop();
    std::cout << tmp->key <<" ";
    arr[i] = tmp->key;
    i++;
    if (tmp->right != 0)
      st.push(tmp->right);
    if (tmp->left != 0)
      st.push(tmp->left);
  }
  std::cout << std::endl;
  return arr;
}

int* printr(Node* root) {
  int* arr = new int[9];
  int i = 0;
  std::stack<Node*> st;
  Node* tmp1 = NULL;
  Node* tmp2 = NULL;
  std::cout << "reverse order: ";
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root -> left;
	} 
    else {
      tmp1 = st.top();
      if (tmp1->right && tmp2 != tmp1->right) {
        root = tmp1->right;
      }
      else {
        st.pop();
        std::cout << tmp1->key <<" ";
        arr[i] = tmp1->key;
        i++;
        tmp2 = tmp1;
      }
    }
  }
  std::cout << std::endl;
  return arr;
}

int* prints(Node* root) {
  int* arr = new int[9];
  int i = 0;
  std::stack<Node*> st;
  std::cout<< "symm order: ";
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root->left;
    }
    else {
      root = st.top();
      st.pop();
      std::cout << root->key <<" ";
      arr[i] = root->key;
      i++;
      root = root->right;
    }
  }
  std::cout << std::endl;
  return arr;
}
