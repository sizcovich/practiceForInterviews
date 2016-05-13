#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <node.h>


class linkedList
{
private:
    node* head;

public:
    linkedList(int value);
    ~linkedList();
    void init();
    node* getHead();
    node* getLast();
    void setHead(node* n);
);
    int getValue(node* n);
    void setNodeValue(node* node, int value);
    void setNextNode(node* n, node* nextNode);
//    void addNode(int value); //add node at the end of the linked list with value value
    void partition(int x);
//    linkedList addTwoLinkedLists(const linkedList list1, const linkedList list2);
};

#endif // LINKEDLIST_H
