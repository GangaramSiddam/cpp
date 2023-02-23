#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<int,int>m;
    map<int, int>::iterator itr;

    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    /*for(itr = m.begin();itr != m.end();itr++)
    {
        cout<<itr->first<<"  "<<itr->second<<endl;
    }*/

    cout<<m.max_size();
}
