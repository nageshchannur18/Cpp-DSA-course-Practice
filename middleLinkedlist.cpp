#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *middle(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    Node *head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};
    head->next->next->next->next = new Node{50, nullptr};

    Node *mid = middle(head);
    if (mid != NULL)
    {
        cout << "middle element is " << mid->data;
    }
    else
    {
        cout << "linked list is empty";
    }
    return 0;
}