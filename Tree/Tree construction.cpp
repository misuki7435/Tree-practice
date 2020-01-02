#include<iostream>
#include<vector>
#include<string>
#include "node.h"
//example input (A(B(E(K,L),F),C(G),D(H(M),I,J)))

using namespace std;
void createTree(node *&root, string str)
{ 
	root->data = str[1];
	int cranketL = 1, cranketR = 0;
	int index = 2;
	while(cranketL != cranketR) {
		if(str[index] == '(')
			cranketL++;
		else if(str[index] == ')')
			cranketR++;
		if(cranketL == cranketR + 2 && str[index] == '(') {
			root->leftChild = new node;
			string temp = str;
			temp.erase(temp.begin(), temp.begin() + index);
			createTree(root->leftChild, temp);
		}
		if(cranketL == cranketR+1 && str[index] >= 'A' && str[index] <= 'Z') {
			root->rightChild = new node;
			root = root->rightChild;
			root->data = str[index];
		}
		index++;
	}	
}
