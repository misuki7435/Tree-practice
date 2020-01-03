#include<iostream>

using namespace std;
bool treeEqual(node *base, node *cmp) {
  if (!base && !cmp)
    return true;
  if (base && cmp && base->data == cmp->data && 
      treeEqual(base->leftChild, cmp->leftChild) && 
      treeEqual(base->rightChild, cmp->rightChild)) {
    return true;
  }
  else
    return false;
}

void treeCopy(node *base, node *&target) {
  if (base) {
    target->data = base->data;
    if (base->leftChild) {
      target->leftChild = new node;
      treeCopy(base->leftChild, target->leftChild);
    }
    if (base->rightChild) {
      target->rightChild = new node;
      treeCopy(base->rightChild, target->rightChild); 
    }
  }
}
