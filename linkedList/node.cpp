#include "node.h"

node::node()
{

}

void node::setData(int data)
{
    this->data = data;
}

void node::setNext(node* next)
{
    this->next = next;
}

int node::getData()
{
    return this->data;
}

node* node::getNext()
{
    return this->next;
}

node::~node()
{

}
