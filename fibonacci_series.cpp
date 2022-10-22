#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int i,n;
   unsigned long long  int a = 0, b = 1, c = 0 ;
   cout<<"Enter no. of terms: ";
   cin>>n;
    cout<<"The fibonacci series will be: "<<endl;
    for (i = 1; i <= n; ++i) {
       cout<<a;
       cout<< ","<<" ";
       c = a + b;
       a = b;
       b = c;
    }
    return 0;
}
