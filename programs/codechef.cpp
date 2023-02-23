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
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        int k = a[i]-b[i];
	        if(k>0)
	        {
	            a[i]=k;
	        }
	        else {
	            a[i]=0;
	        }
	    }
	   int max = *max_element(a,a+n);
	   cout<<max<<endl;
	}
	return 0;
}

