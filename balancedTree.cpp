#include <iostream>
#include <cmath>

using namespace std;

class Node{
	public:
		int value;
		Node* right;
		Node* left;
};

int height(Node* node){
	if (node == NULL){return 0;}
	else{
		int leftHeight = height(node->left);
		int rightHeight = height(node->right);
		if (abs(rightHeight-leftHeight) > 1){ return -1;}
		return 1 + max(rightHeight,leftHeight);
	}
}

bool balancedTree(Node *node){

	return (height(node) != -1);
}

int main(){
	Node* p = new Node();
	Node* q = new Node();
	Node* r = new Node();
	Node* s = new Node();
	Node* t = new Node();
	p->right = q;
	p->left = r;
	q->right = s;
	s->right = t;
	p->value = 1;
	q->value = 3;
	r->value = 2;
	s->value = 4;
	t->value = 5;

	cout << balancedTree(p) << endl;

}