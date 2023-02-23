#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int l[n],r[n];
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }

        int res[n];
        for(int i=0;i<n;i++)
        {
            int x = l[i]*r[i];
            res[i] = x;
        }

        vector<int>v;
        vector<int>ind;
        int max = *max_element(res,res+n);
        int c =0;
        for(int i=0;i<n;i++)
        {
            if(res[i] == max)
            {
                c++;
                ind.push_back(i);
                v.push_back(r[i]);
            }
        }

        if(c==1)
        {
            int index = max_element(res,res+n)-res;
            index++;
            cout<<index<<endl;
        }
        else
        {
            int ekkuva = max_element(v.begin(), v.end()) - v.begin();

            int e = ind[ekkuva];

            cout<<(e+1)<<endl;

        }

    }
}
