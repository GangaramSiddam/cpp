#include<bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if(ch == '+' || ch == '-')
    {
        return 1;
    }
    if(ch == '*' || ch == '/')
    {
        return 2;
    }
    if(ch == '^')
    {
        return 3;
    }

    return 0;
}

string convert(string infix)
{
    stack<int>s;
    string postfix = "";
    int i=0;

   while(infix[i] != '\0')
   {


    if(infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
    {
        postfix += infix[i];
        i++;
    }
   else if(infix[i] == '(')
    {
        s.push(infix[i]);
        i++;
    }
    else if(infix[i] == ')')
    {
        while(s.top() != '(')
        {
            postfix += s.top();
            s.pop();
        }
        s.pop();
        i++;
    }

    else
    {
        while(!s.empty() && priority(infix[i])<= priority(s.top()))
        {
            postfix += s.top();
            s.pop();
        }
        s.push(infix[i]);
        i++;
    }

   }

   while(! s.empty())
   {
       postfix += s.top();
       s.pop();
   }

cout<<"postfix is : "<<postfix;
return postfix;



}


int main()
{
    string infix = "((a+(b*c))-d)";

   string s =  convert(infix);

   cout<<s;

}
