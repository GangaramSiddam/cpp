#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;

	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


	    vector<int>b;
	    vector<int>c;
	    map<int,int>m;
	    map<int,int>::iterator itr;

	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }

	    for(itr = m.begin();itr!=m.end();itr++)
	    {
	        c.push_back(itr->first);
	        b.push_back(itr->second);
	    }
	    int k = b.size();
	    int arr[k];
	    int ar[k];



	    for(int i=0;i<k;i++)
	    {
	        arr[i] = b[i];
	        ar[i] = b[i];
	    }
	    sort(arr, arr + k, greater<int>());


	    if(c.size()>1)
	    {
	        if(arr[0] == arr[1])
	        {
	            cout<<"CONFUSED"<<endl;
	        }
	        else
	        {
	           int index = max_element(ar, ar + k) - ar;
	           cout<<c[index]<<endl;
	        }
	    }
	    else
	    {
	        cout<<c[0]<<endl;
	    }

	}
	return 0;
}
