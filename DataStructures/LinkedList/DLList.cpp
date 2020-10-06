#include <iostream>
#include "DLList.h"
using namespace std;

DLList::DLList()
{
    head = NULL;
    current = NULL;
    temp = NULL;
}

void DLList::Insert(int data,int pos)
{
    int k = 1;
    nodePtr n = new node;
    n->data= data;
    if(pos == 1)
    {
        n->next=head;
        n->prev=NULL;
        head = n;
    }
    else
    {
        current = head;
        while(current->next != NULL && k < pos)
        {
            k++;
            current=current->next;
        }
        if(current->next == NULL)
        {
            current->next=n;
            n->prev=current;
            n->next=NULL;
        }
        else
        {
            temp = current->next;
            current->next = n;
            n->prev = current;
            n->next = temp;
            temp->prev = n;
        }
    }
}

void DLList::Print()
{
    current = head;
    while(current!=NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
    //cout << "--------------------------" << endl;
    //DLList::ReversePrint(head);
}

void DLList::ReversePrint(nodePtr head)
{
    if(head == NULL)
        return;
    ReversePrint(head->next);
    cout << head->data << endl;
}

void DLList::Delete(int pos)
{
    int k =1;
    current = head;
    if(pos == 1)
    {
        head = head->next;
        head->prev=NULL;
        delete current;
    }else{
        while(current->next!= NULL && k<pos)
        {
            k++;
            temp = current;
            current=current->next;
        }
        if(k>=pos-1){
            cout <<"Position " <<pos<<" is invalid" << endl;
            return;
        }
        if(current->next == NULL)
        {
            delete current;
            temp->next = NULL;
        }else{
            temp->next = current->next;
            current->next->prev=temp;
            delete current;
        }
    }
}

void DLList::DeleteDLL()
{
    current = head;
    while(head!=NULL)
    {
        head = head->next;
        delete current;
        current = head;

    }
}

