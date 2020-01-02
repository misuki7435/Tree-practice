#include<iostream>
#include<queue>
#include "node.h"

using namespace std;
void preOrderTraversal(node *root)
{
	if(root) {
		cout<<root->data<<'\n';
		preOrderTraversal(root->leftChild);
		preOrderTraversal(root->rightChild);
	}
}

void inOrderTraversal(node *root)
{
	if(root) {
		inOrderTraversal(root->leftChild);
		cout<<root->data<<'\n';
		inOrderTraversal(root->rightChild);
	}
}

void postOrderTraversal(node *root)
{
	if(root) {
		postOrderTraversal(root->leftChild);
		postOrderTraversal(root->rightChild);
		cout<<root->data<<'\n';
	}
}

void levelOrderTraversal(node *root)
{
	queue<node*> que;
	node *cur = nullptr;
	que.push(root);
	cout<<"\nlevel-order traversal start:\n\n";
	while(!que.empty()) {
		cur = que.front();
		if(cur->leftChild)
			que.push(cur->leftChild);
		if(cur->rightChild)
			que.push(cur->rightChild);
		cout<<cur->data<<'\n';
		que.pop();
	}
	cout<<"\ntraversal end.\n";
}
