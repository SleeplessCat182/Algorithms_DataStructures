#ifndef DLLIST_H_INCLUDED
#define DLLIST_H_INCLUDED

class DLList{

private:
    typedef struct node{
        int data;
        node* prev;
        node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    DLList();
    void Insert(int data,int pos);
    void Delete(int pos);
    void Print();
    void ReversePrint(nodePtr);
    void DeleteDLL();

};


#endif // DLLIST_H_INCLUDED
