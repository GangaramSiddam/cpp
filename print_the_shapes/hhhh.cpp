#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;

    v.push_back('a');
    v.push_back('z');
    v.push_back('b');
    v.push_back('y');
    v.push_back('c');
    v.push_back('x');
    v.push_back('d');
    v.push_back('w');

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<"  ";
    }

    //int a = *min_element(v.begin(),v.end());

    //cout<<"\n"<<a;


}
