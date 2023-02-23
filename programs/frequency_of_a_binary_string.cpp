#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<char,int>m;
    map<char,int>::iterator itr;

    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }

    for(itr =m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<"   "<<itr->second<<endl;
    }
}
