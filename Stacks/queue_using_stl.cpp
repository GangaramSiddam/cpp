#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(5);
    q.push(55);
    q.push(50);

    cout<<q.front()<<endl;
    cout<<q.back();
}
