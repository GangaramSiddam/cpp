#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
     int data;
     node *next;

};

void travers(node **head)
{
    node *temp = new node();

    temp = *head;

    do{

        cout<<temp->data<<"-->";
        temp = temp->next;
    }while(temp != *head);
}

int main()
{
    node *last;
    node *one = new node();
    node *two = new node();
    node *three = new node();

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next= one;
    last = one;

    travers(&last);
}
