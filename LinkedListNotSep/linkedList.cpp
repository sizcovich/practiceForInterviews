#include <iostream>
#include "linkedList.h"
using namespace std;

void linkedList::partition(int x){
	node* current = head->next;
	node* previous = head;
	while(current != NULL){
		if (current->value < x){
			previous->next = current->next;
			current->next = head;
			this->head = current;
			current = previous->next;

		}
		else{
			previous = current;
			current = current->next;
		}
	}
}

int main(){

	node* n = new node();
	node* s = new node();
	node* t = new node();
	n->value = 4;
	n->next = s;
	s->value = 5;
	s->next = t;
	t->value = 2;
	t->next = NULL;

	linkedList *l = new linkedList();
	l->head = n;

	l->partition(3);
	node *current = l->head;
	while(current != NULL){
		cout << current->value << endl;
		current = current->next;
	}
	return 0;
}