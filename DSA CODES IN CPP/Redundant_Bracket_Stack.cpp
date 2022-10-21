#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool solve()
{
    string str;
    cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
           s.push(str[i]);
        }
        else
        {
            if(str[i]==')')
            {
                if(s.top()=='+'||s.top()=='*'||s.top()=='/'||s.top()=='-')
                {
                    while(s.top()!='(')
                    {
                        s.pop();
                    }
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(s.empty())
    return true;
    else
    return false;
}
int main()
{
    if(solve())
    {
        cout<<"NON Reduntant"<<endl;
    }
    else
    {
       cout<<"Reduntant"<<endl;
    }
   return 0;
}