#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
bool detectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    Node *head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    // creating a loop
    head->next->next->next = head->next->next;

    if (detectLoop(head))
    {
        cout << "loop detected";
    }
    else
    {
        cout << "no loop";
    }
    return 0;
}