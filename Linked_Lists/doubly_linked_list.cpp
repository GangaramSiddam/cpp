#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *prev;
    node*next;

};

void start(node **head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->prev = NULL;

    newnode->next = *head;
    *head = newnode;
}

void ending(node **head, int value)
{

    node *newnode = new node();
    node *temp = new node();

    newnode->data = value;
    newnode->next = NULL;

    temp = *head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;

}

void middle(node **head, int prev, int next, int value)
{
    node *newnode = new node();
    node *temp = new node();

    newnode->data = value;

    temp = *head;

    while(temp->data != prev && temp->next != NULL)
    {
        temp = temp->next;
    }
    if(temp->next == NULL)
    {
        cout<<"No such node exist!!"<<endl;
    }
    else
    {
        if(temp->next->data != next)
        {
            cout<<"wrong output sequence"<<endl;
        }
        else
        {
            newnode->next = temp->next;
            newnode->prev = temp;
            temp->next = newnode;
        }
    }
}

int main()
{

    node *head;
    node *one = new node();
    node *two = new node();
    node *three = new node();

    one->data = 1;
    two->data = 2;
    three->data = 3;


    //handling prev pointers

    one->prev = NULL;
    two->prev = one;
    three->prev = two;

    //handling next pointers

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    start(&head,5);
    ending(&head,6);

    middle(&head, 1,2,10);
    middle(&head,3,6,4);

    while(head!=NULL)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }
}
