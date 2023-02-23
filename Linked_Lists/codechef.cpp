
#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c;
	    cin>>n;
	    string s;
	    cin>>s;

	    if(n%2 != 0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        for (int i=0;i<n;i++)
	        {
	            c=0;
	            char ch = s[i];
	            for(int j=0;j<n;j++)
	            {
	                if(ch == s[j])
	                {
	                    c++;
	                }

	            }
	            if(ch%2 != 0)
	            {
	                cout<<"NO"<<endl;
	                break;
	            }
	           else if(ch%2==0)
	            {
	                continue;
	            }

	        }
	        if(c %2 ==0)
	        {
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}
