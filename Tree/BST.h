#include<iostream>

using namespace std;
void insert(node *&root, int num) {
  if (num > root->data) {
    if (root->rightChild) 
      insert(root->rightChild, num);
    else 
      root->rightChild = new node(num);
  } else {
    if (root->leftChild) 
      insert(root->leftChild, num);
    else 
      root->leftChild = new node(num);
  }
} 
