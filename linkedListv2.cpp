#include <iostream>
#include <vector>

using namespace std;

// template<typename type>
struct LinkedNode{
	int value;
	LinkedNode* next;
};

LinkedNode* getNode(LinkedNode* head, int value){
	LinkedNode* current = head;
	while(current != NULL){
		if(current->value == value){
			return current;
		}
		current = current->next;
	}
	throw "Element not present in Linked List"; 
}

int main(){
	LinkedNode* p = new LinkedNode();
	LinkedNode* q = new LinkedNode();
	LinkedNode* x = new LinkedNode();
	LinkedNode* z = new LinkedNode();
	LinkedNode* r = new LinkedNode();
	p->value = 3;
	p->next = q;
	q->value = 6;
	q->next = x;
	x->value = 1;
	x->next = z;
	z->value = 8;
	z->next = r;
	r->value = 10;
	r->next = NULL;
	cout << "expected result: " << x << endl;
	cout << "getNode result: " <<getNode(p,0) << endl;

	LinkedNode sinPunterop;
	LinkedNode sinPunteroq;
	LinkedNode sinPunterox;
	sinPunterop.value = 3;
	sinPunterop.next = &sinPunteroq;
	sinPunteroq.value = 6;
	sinPunteroq.next = &sinPunterox;
	sinPunterox.value = 1;
	sinPunterox.next = NULL;

	cout << "expected result: " << &sinPunterox << endl;
	cout << "getNode result: " <<getNode(&sinPunterop,1) << endl;
	return 0;
}