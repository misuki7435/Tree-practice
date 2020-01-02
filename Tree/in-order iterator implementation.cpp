//in-order iterator implementation
#include<iostream>
#include<vector>
#include<stack>
#include "node.h"

using namespace std;
class inOrderIterator
{
	public:
		int next(void) {
			while(cur) {
				S.push(cur);
				cur = cur->leftChild;
			}
			if(S.empty()) {
				cerr<<"out of bound!\n";
				cur = root;
				return -1;
			}
			cur = S.top();
			S.pop();
			int buffer = cur->data;
			cur = cur->rightChild;
			return buffer;
		}
		void setRoot(node *ptr) {
			root = ptr;
			cur = ptr;
			while(!S.empty())
				S.pop();
			cerr<<"setRoot complete:"<<root->data<<'\n';
		}
	private:
		node *root;
		node *cur;
		stack<node*> S;
};
