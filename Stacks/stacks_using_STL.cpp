#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(5);
    s.push(6);
    s.push(7);

    s.pop();

    s.push(7);
    s.push(8);

    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;

    cout<<s.top();
}
