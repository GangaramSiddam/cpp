#include <iostream>
#include<bits/stdc++.h>
using namespace std;

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

	    int c=0;

	    for(int i=0;i<n-1;i++)
            {
                if(s[i]=='1' && s[i+1]=='0')
                {
                    c++;
                }
            }

            cout<<c<<endl;
	}
	return 0;
}
