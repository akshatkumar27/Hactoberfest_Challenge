#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
  
    int a,b; int r=0;
    int l=0;
                       int arr[a][a];
             cin>>a;
             for(b=0;b<a;b++)            
 for(int j=0;j<a;j++)
 cin>>arr[b][j];   

                
                    

               for(b=0;b<a;b++)
                   {
                       r+=arr[b][b];
                   }     

                   for(b=0;b<a;b++)
                       l+=arr[b][a-b-1];
                  
            
               
int diff=r-l;
diff=abs(diff);
cout<<diff;
return 0;
}

