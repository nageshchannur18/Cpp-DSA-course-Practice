#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *next;
};
Node *top = NULL;
void push(char ch)
{
    Node *newNode = new Node();
    newNode->data = ch;
    newNode->next = top;
    top = newNode;
}

char pop()
{
    if (top == NULL)
        return '\0';

    char ch = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return ch;
}

int main()
{
    string s = "lordshiva";
    for (int i = 0; i < s.length(); i++)
    {
        push(s[i]);

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = pop();

            cout << "reversed string is" << s;
            return 0;
        }
    }
}