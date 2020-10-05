#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

class LinkedList
{
private:
    typedef struct node
    {
        int data;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    LinkedList();
    int ListLength();
    void Insert(int data,int position);
    void Delete(int position);
    void DeleteLinkedList();
    void Print();
};

#endif // LINKEDLIST_H_INCLUDED
