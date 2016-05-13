#include "linkedlist.h"

linkedList::linkedList(int value)
{
    head = new node;
    head->setData(value);
    head->setNext(NULL);
}

linkedList::~linkedList()
{

}

node* linkedList::getHead()
{
    return head;
}

void linkedList::setHead(node* n)
{
    head = n;
}

//void linkedList::setLast(node* n)
//{
//    this->last = n;
//}

node* linkedList::getNext (node *n)
{
    return this->getNext(n);
}

int linkedList::getValue(node* n)
{
    return n->getData();
}

void linkedList::setNodeValue(node* node, int value)
{
    node->setData(value);
}

void linkedList::setNextNode(node* n, node* nextNode)
{
    n->setNext(nextNode);
}

void linkedList::partition(int x){
    node* current = head->getNext();
    node* previous = head;
    while(current != NULL){
        if(current->getValue() < k){
            previous->getNext()
        }
    }
}

//void linkedList::addNode(int value)
//{
//    node* newNode = new node;
//    newNode->setData(value);
//    newNode->setNext(NULL);
//    last->setNext(newNode);
//    this->setLast(newNode);
//}

//linkedList addTwoLinkedLists(const linkedList list1, const linkedList list2);
