#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        current = next;
        prev = current;
    }
    return prev;
}
int main()
{
    Node *head = NULL;

    head = reverseLinkedList(head);
    return 0;
}
