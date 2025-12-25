#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top = NULL;

void push(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;

    cout << x << "pushed to stack\n";
}
void pop()
{
    if (top == NULL)
    {
        cout << "stack underflow\n";
        return;
    }
    Node *temp = top;
    cout << top->data << "popped from stack\n";
    top = top->next;
    delete temp;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(80);
    push(60);
    pop();
    return 0;
}
