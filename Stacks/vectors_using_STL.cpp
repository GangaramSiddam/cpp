#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    vector<int>::iterator i;



    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    v.pop_back();

    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}
