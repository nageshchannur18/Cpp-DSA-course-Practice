#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void insertatTail(Node *&head, int val)
{
    Node *newNode = new Node();

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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    insertatTail(head, 10);
    insertatTail(head, 20);
    insertatTail(head, 30);
    display(head);
    return 0;
}