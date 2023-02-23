#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    int x;

    map<char,int>m;
    map<char,int>::iterator itr;


    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }

    for(itr=m.begin();itr != m.end();itr++)
    {
        x = itr->second;
        cout<<x<<endl;
    }


}
