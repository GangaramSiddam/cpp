#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
