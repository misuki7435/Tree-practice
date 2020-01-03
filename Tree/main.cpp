#include<iostream>
#include<string>

#include "node.h"
#include "BST.h"
#include "Tree construction.h" 
#include "Tree operations.h"
#include "Tree traversals.h"
#include "in-order iterator.h"

using namespace std;
int main() {
  node *root[3] = {};
  for(int i = 0; i < 3; i++) 
    root[i] = new node(10);
  for(int i = 0; i < 2; i++) {
    int num;
    cin>>num;
    while (num != -1) {
      insert(root[i], num);
      cin>>num;
    }
  }
  if(treeEqual(root[0],root[1]))
    cout<<"Equal!\n";
  else
    cout<<"Not Equal!\n";
    
  treeCopy(root[0], root[2]);
  for(int i = 0; i < 3; i++) {
    cout<<"root "<<i<<"pre-order traversal:\n";
    preOrderTraversal(root[i]);
    cout<<"root "<<i<<"in-order traversal:\n";
    inOrderTraversal(root[i]);
  }
  return 0;
} 
