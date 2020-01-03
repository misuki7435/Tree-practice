#include<iostream>

using namespace std;
class node {
 public:
  node() {};
  node (int value) {
    data = value;
  };  
  int data;
  node *leftChild = nullptr;
  node *rightChild = nullptr;
};
