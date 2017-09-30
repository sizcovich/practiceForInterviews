#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int d, Node* r){
		data = d;
		next = r;
	}
};

Node* findNode(Node* head, int counter){
	int count = 0;
	if(head == NULL){
		throw invalid_argument("counter must be bigger than the list size");
	}
	while(counter != count){
		head = head->next;
		count++;
	}
	return head;
}

void reverseLinkedList(Node* list){
	Node* i = list;
	Node* middleEl = list;
	int count = 0;
	int iEl = 0;
	while(list != NULL){
		count++;
		list = list->next;
	}
	int j = count-1;
	list = i;
	while(iEl < j){
		int temp = i->data;
		middleEl = findNode(list, j);
		i->data = middleEl->data;
		middleEl->data = temp;
		iEl++;
		j--;
		i = i->next;
	}
}

int main(){
	Node* q = new Node(3,NULL);
	Node* p = new Node(2,q);
	Node* head = new Node(1,p);
	reverseLinkedList(head);
	while(head != NULL){
		cout << head->data<<endl;
		head = head->next;
	}
	return 0;
}