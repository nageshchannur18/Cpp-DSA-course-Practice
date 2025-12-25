#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

bool Search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = new Node{10, nullptr};

    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    int key = 20;
    if (Search(head, key))
        cout << "element found";
    else
        cout << "element not found";
    return 0;
}
