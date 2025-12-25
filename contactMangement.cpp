#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void addcontact(Node*& head,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void displayconatact(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    
}
void deletecontact(Node*& head,int value){
    if(head==NULL){
        cout<<"contact list is empty"<<endl;
        return ;

    }
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* curr =head;
}