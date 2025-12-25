#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack* next; // self-referential structure
};
*top=NULL;
typedef struct stack node;
void push();
void pop();
void display();
void peek();

int main()
{
    int choice;
    while(1)
    {
        printf("1.push\n2.pop\n3.display\n4.peek\n5.exit\n");
        printf("enter the choice");
        scanf("%d",&choice);
        if(choice==1)
        push();
        else if(choice==2)
        pop();
        else if(choice==3)
          display();
           else if(choice==4)
              peek();
              else if(choice==5)
              break;
     else
     printf("invalid choice\n");
    }

    printf
};

