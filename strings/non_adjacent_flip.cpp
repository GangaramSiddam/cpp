#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    vector<int>v1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '1')
        {

            v1.push_back(i);
        }
    }


    vector<int>v2;

    v2.push_back(v1[0]);

    int i = 0;
    int j =1;
    while(i < v1.size()-1 && j<v1.size())
    {
        if(v1[i] + 1 == v1[j])
        {
            j++;
        }
        else
        {

            v2.push_back(v1[j]);
            i=j;
            j++;

        }

    }


}
