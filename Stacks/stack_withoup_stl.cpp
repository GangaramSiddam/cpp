//did not complete the implementation


#include<iostream>
#include<bits/stdc++.h>
#define MAX 10

using namespace std;
int size = 0;

class st
{
public:

    int items[MAX];
    int top;
};

void create(st *s) //creating stack
{
    s->top = -1;
}

//checking if stack is full

int full(st *s)
{
    if(s->top == MAX-1)
    {
        return 1;
    }
    else
        return 0;
}

//checking if stack is empty

int isempty(st *s)
{
    if(s->top == -1)
        return -1;
    else
        return 0;

}

//add elements into the stack

void push(st *s,int value)
{
    if(full)
        cout<<"overflow"<<endl;
    else
        s->top++;
        s->items[s->top] = value;
    size++;

}

//deleting the items

void pop(st *s)
{
    if(isempty)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        cout<<"the item popped = "<<s->top;
        s->top--;
    }
    size--;
    cout<<endl;
}

//print the elements of the stack

void print(st *s)
{
    for(int i=0;i<size;i++)
    {
        cout<<s->items[i]<<"   ";
    }
    cout<<endl;
}

int main()
{

 st *s = new st();

 create(s);
 push(s,1);
 print(s);


}
