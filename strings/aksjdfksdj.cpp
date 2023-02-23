#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int number(string s)
{
    int c =0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }
    return c;
}

vector<int> fun(string s)
{
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
    return v2;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;

	    int count = 0;

	    while(number(s))
	    {
	        vector<int> v = fun(s);

	        for(int i=0;i<v.size();i++)
	        {
	            s[v[i]] = '0';
	        }
	        count++;
	    }

	    cout<<count<<endl;


	}
	return 0;
}
