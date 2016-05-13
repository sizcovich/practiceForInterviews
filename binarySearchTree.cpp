#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node* left;
	Node* right;
};

class BinarySearchTree{
public:
	Node *root;
	Node* search(int elem){
		Node* current = this->root;
		while(current != NULL){
			if(current->value < elem){
				current = current->right;
			}
			else if(current->value > elem){
				current = current->left;
			}
			else{
				return current;
			}
		}
		throw("Element not found");
	}
};

int main(){
	Node *n = new Node;
	Node *s = new Node;
	Node *r = new Node;
	n->value = 2;
	s->value = 4;
	r->value = 3;
	r->right = s;
	r->left = n;
	s->right = NULL;
	s->left = NULL;
	n->right = NULL;
	n->left = NULL;

	BinarySearchTree *tree = new BinarySearchTree;
	tree->root = r;

	Node* k = new Node;
	k = tree->search(5);
	cout << k->value <<endl;
	return 0;
}