#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, int> m1{{1,2},{2,3},{3,4}};

    /*  1-->2
        2-->3
        3-->4
    */

    map<string, int> m2;

    m2["a"] = 10;
    m2["b"] = 20;
    m2["c"] = 30;
    m2["d"] = 40;

    map<int, int>m(m1);

    cout<<m1.at(3);

}
