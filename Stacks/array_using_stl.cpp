#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 5>a;
    a.fill(1);
    a.fill(2);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
}
