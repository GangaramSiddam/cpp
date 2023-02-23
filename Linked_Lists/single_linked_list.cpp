#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//creating a node

class node{

public:
    int data;
    node *next;
};

int main()
{
    //create objects for class i.e number of nodes

    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    //allocate memory for nodes

    one = new node();
    two = new node();
    three = new node();

    //assign values for nodes

    one->data = 1;
    two->data = 2;
    three->data = 3;

    //connect the nodes

    one->next = two;
    two->next = three;
    three->next = NULL;

    //printing the values of node

    head = one;
    while(head != NULL)
    {

        cout<<head->data<<"\t";
        head = head->next;
    }
}
