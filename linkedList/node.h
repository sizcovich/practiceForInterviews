#ifndef NODE_H
#define NODE_H

class node
{
private:
    int data;
    node* next;
public:
    node();
    ~node();
    void setData(int data);
    void setNext(node* next);
    int getData();
    node* getNext();
};

#endif // NODE_H
