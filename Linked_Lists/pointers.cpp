#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p,q = 15, **s;
    p = &q;
    s = &p;

    cout<<**s<<" "<<*p;


}
