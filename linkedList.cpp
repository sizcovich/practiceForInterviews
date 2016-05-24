#include <iostream>
#include <string>

using namespace std;

// template<class T>
class Node{
	public:
	int value;
	Node* next;
};

class LinkedList{
public:
	Node* head;
};

void eraseI(LinkedList &n, int i){
	Node *anterior = n.head;
	Node * actual = n.head;
	int counter = 0;
	while(actual != NULL){
		if(i == 0){
			n.head = actual->next;
			free(actual);
			break;
		}
		if(counter == i){
			anterior->next = actual->next;
			free(actual);
			actual = anterior->next;
			break;
		}
		else{
			anterior = actual;
			actual = actual->next;
			++counter;
		}
	}
}

int main(){
	Node * p = new Node;
	Node * q= new Node;
	Node * r= new Node;
	Node * s= new Node;
	p->value = 1;
	q->value = 2;
	r->value = 3;
	s->value = 3;
	p->next = q;
	q->next = r;
	r->next = s;
	s->next = NULL;
	LinkedList *l = new LinkedList;
	l->head = p;
	eraseI(*l, 3);
	Node* k = new Node;
	k = (*l).head;
	while(k != NULL){
		cout << k->value << endl;
		k = k->next;
	}

	return 0;
}