#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    getline(cin,s);
    
    int a=s.length(); 
    for( int i=0;i<a;i++)
    {  int z=s[i];
        if(z>=65&&z<=90)
        {
            z=z+32;
            s[i]=z;
        }
     else
     {
         z=z-32;
         s[i]=z;
     }
    }
    cout<<s;
    return 0;
}

