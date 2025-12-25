#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void insertAtBeginning(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head)
{
    Node *newNode = new Node();
    newNode->data = 40;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteList(Node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}


void deleteListEnd(Node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL; 
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;// shradha khapra
    temp->next = NULL;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = NULL;
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);

    cout << "Linked List:" << endl;
    printList(head);

}

