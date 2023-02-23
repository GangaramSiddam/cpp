#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int data;
    node *next;
};

void beginning(node **head, int value)
{

    node *beginning = new node();

    beginning->data = value;
    beginning->next = *head;
    *head = beginning;
}

void ending(node **head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    node *temp = new node();

    temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;


}

void middle(node **head, int prev, int next, int value)
{

    node *newnode = new node();
    newnode->data = value;

    node *temp = new node();
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
        if(temp->next->data == next)
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
        else if(temp->next->data != next)
        {
            cout<<"wrong input!!"<<endl;
        }
    }
}


int main()
{
    node *head;
    node *one = new node();
    node *two= new node();
    node *three = new node();

    one->data = 1;
    two->data = 2;
    three ->data = 4;


    head= one;
    one->next = two;
    two->next = three;
    three->next = NULL;
    middle(&head, 2,4,3);

    beginning(&head , 10);
    beginning(&head, 20);

    ending(&head, 100);
    ending(&head, 200);

    middle(&head, 3,2,5);

    middle(&head,2,4,3);
    middle(&head,2,3,600);
    middle(&head,1,2,6);
    middle(&head,2000,100,7);



    while(head!=NULL)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }

}
