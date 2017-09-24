#include <cmath>
#include <cstdio>
#include <queue>
#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* right;
		Node* left;
};

int maxData(Node* root){
	queue<Node*> m_queue;
	m_queue.push(root);
	int max = root->data;
	while(!m_queue.empty()){
		Node* current = m_queue.front();
		m_queue.pop();
		if(max<current->data){
			max = current->data;
		}
		if(current->left != NULL){
			m_queue.push(current->left);
		}
		if(current->right != NULL){
			m_queue.push(current->right);
		}
	}
	return max;
}

int minData(Node* root){
	queue<Node*> m_queue;
	m_queue.push(root);
	int min = root->data;
	while(!m_queue.empty()){
		Node* current = m_queue.front();
		m_queue.pop();
		if(min>current->data){
			min = current->data;
		}
		if(current->left != NULL){
			m_queue.push(current->left);
		}
		if(current->right != NULL){
			m_queue.push(current->right);
		}
	}
	return min;
}


bool isBST(Node* root){
	if(root == NULL){
		return true;
	}
	if((root->right != NULL && (root->right->data < root->data)) || (root->left != NULL && (root->left->data > root->data))){
		return false;
	}
	if(((root->right != NULL) && root->data>minData(root->right)) || (root->left != NULL && root->data<maxData(root->left))){
		return false;
	}
	return isBST(root->left) && isBST(root->right);
}

int main(){
	Node* n = new Node();
	Node* p = new Node();
	Node* m = new Node();
	Node* e = new Node();
	Node* r = new Node();
	n->data = 10;
	p->data = 9;
	m->data = 13;
	e->data = 12;
	r->data = 15;
	n->left = p;
	m->right = r;
	m->left = e;
	n->right = m; 
	cout<<isBST(n) << endl;
	return 0;
}

