#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node *&head, int dat)
{
    node *n = new node(dat);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *kuch = head; // making an iterater for traversing the linked klist till null value

    while (kuch->next != NULL) // loop for traversal till NULL
    {
        kuch = kuch->next; // kuch ki value nexzt krta rahgea till it gets to NULL
    }
    kuch->next = n; // kuch hamaara last pe chla gya then humne n daal diya waha
}
void insertAtHeadI(node *&head, int data)
{
    node *n = new node(data);
    n->next = head; // ab node ' n ' humaara point kareag at head
    head = n;       // and the new head ofthe linkedlist will be n
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
bool search(node *head, int value)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtBeginning(node *&head)
{
    
    node *temp = head;
    head = head->next;
    delete temp;// to free the memory 
}

int main ()
{
    node *head =NULL;
    insertAtHeadI(head,23);
    insertAtTail(head,45);
    insertAtTail(head,33);
    deleteAtBeginning(head);
    display(head);
}