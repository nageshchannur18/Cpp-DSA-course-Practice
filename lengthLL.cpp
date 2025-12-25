#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int length(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    cout << "length of linked list is" << length(head);
    return 0;
}
