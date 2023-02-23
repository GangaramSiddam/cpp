#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int data;
    node *next;
};

int main()
{
    //initialization of nodes of class node
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    //allocation of storage to the created node in the memory

    one = new node();
    two = new node();
    three = new node();

    // assigning the values to the data part of the node

    one ->data = 1;
    two->data = 2;
    three ->data = 3;


    //connecting the node

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

    //inserting at the beginning

    node *newnode = NULL; //create a new node

    newnode = new node(); //memory allocation

    newnode->data = 10; //assigning the values to the data part

    newnode->next = head;

    head = newnode;

    //inserting at the end
    node *lastnode = NULL;

    lastnode = new node(); //assigning the memory values

    lastnode->data = 20;
    lastnode->next = NULL; //assigning the values to the parts of the node




    node *temp = NULL;
    temp = new node();

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = lastnode;



    //inserting in the middle

    node *middlenode = NULL;
    middlenode = new node();

    middlenode->data = 4;


    //finding the position

    node *temp1 = NULL;
    temp1  = new node();

    temp1 = head;

    while(temp1->data != 3)
    {
        temp1 = temp1->next;
    }

    middlenode->next = temp1->next;
    temp1->next = middlenode;

    //lastnode->next->next = NULL;


    //printing the values

    while(head != NULL)
    {
        cout<<head->data<<"--->";
        head = head->next;
    }






}
