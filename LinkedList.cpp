#include <iostream>
#include <cstdlib>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    current = NULL;
    temp = NULL;
}

void LinkedList::Insert(int data,int position)
{
    nodePtr n = new node;
    n->data = data;
    int k = 1;
    if(position == 1)
    {
        n->next = head;
        head = n;
    }else {
        current = head;
        while(current->next!=NULL && k<position)
        {
            current=current->next;
            k++;
        }
        temp = current->next;
        current->next=n;
        n->next=temp;
    }
}

void LinkedList::Print()
{
    current = head;
    while(current!=NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}
//Return the length of the list
int LinkedList::ListLength()
{
    current = head;
    int count = 0;
    while(current!=NULL)
    {
        current = current->next;
        count++;
    }
    return count;
}

void LinkedList::Delete(int position)
{
    int k = 1;
    current = head;
    temp = current;
    if(position == 1)
    {
        temp = head;
        head = head->next;
        delete temp;
        return;
    }else{
        while(current->next!=NULL && k<position)
        {
            temp = current;
            current=current->next;
            k++;
        }
        if(current->next==NULL)
        {
            delete current;
            temp->next=NULL;
        }else{
            temp->next = current->next;
            delete current;
        }
    }
}

void LinkedList::DeleteLinkedList()
{
    current = head;
    while(current!=NULL)
    {
        temp = current->next;
        delete current;
        current = temp;
    }
}
