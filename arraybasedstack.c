#include <stdio.h>
int a[100], top = -1;
void push();
void pop();
void display();
void peek();

int main()
{
    int choice;
    while (1)
    {
        printf("1.push\n2.pop\n3.display\n4.peek\n5.exit\n");
        printf("enter your choice");
        scanf("%d", &choice);
        if (choice == 1)

            push();
        else if (choice == 2)

            pop();

        else if (choice == 3)

            display();

        else if (choice == 4)

            peek();

        else if (choice == 5)

            break;

        else

            printf("invalid choice\n");
    }
    return 0;
}

void push()
{
   if (top == 99)
    printf("stack is overflow\n");
    
    else
    {
        int x;
        printf("enter the value to be pushed\n");
        scanf("%d", &x);
        top++;
        a[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("stack is underflow\n");
    }
    else
    {
        printf("popped element is %d\n", a[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack element are\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", a[i]);
        }
    }
}
void peek()
{

    if (top == -1)

        printf("stack is empty\n");

    else

        printf("top element is %d\n", a[top]);
}
