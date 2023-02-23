#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s,r;
        cin>>s;
        cin>>r;

        map<char,int>m1;
        map<char,int>::iterator itr1;

        map<char,int>m2;
        map<char,int>::iterator itr2;

        for(int i=0;i<n;i++)
        {
            m1[s[i]]++;
            m2[r[i]]++;
        }

        std::vector<int>a ;
        vector<int>b;

        for(itr1 = m1.begin();itr1 != m1.end();itr1++)
        {
            a.push_back(itr1->second);
        }

         for(itr2 = m2.begin();itr2 != m1.end();itr2++)
        {
            b.push_back(itr2->second);
        }
    }
}
