#include <iostream>

using namespace std;

class Node{
	public:
		Node* next;
		int value;
};

Node* getLast(Node *head){
	Node* current = head->next;
	while(current->next != head){
		current = current->next;
	}
	return current;
}

void insertNode(Node* head, Node* newNode){
	if(head == NULL){
		head = newNode;
	}
	Node* last = getLast(head);
	if(head->value>newNode->value || last->value<newNode->value){
		last->next = newNode;
		newNode->next = head;
		return;
	}
	Node* current = head;
	while(current->value<=newNode->value){
		if(current->next->value>newNode->value){
			newNode->next = current->next;
			current->next = newNode;
			break;
		}
		current=current->next;
	}

}

int main(){
	Node* x = new Node();
	x->value = 1;
	Node* y = new Node();
	y->value = 2;
	Node* z = new Node();
	z->value = 4;
	Node* p = new Node();
	p->value = 0;
	x->next = y;
	y->next = z;
	z->next = x;
	insertNode(x,p);
	Node* current = x->next;
	cout << x->value <<endl;
	while(current != x){
		cout << current->value << endl;
		current=current->next;
	}

	return 0;
}