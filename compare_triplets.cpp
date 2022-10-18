#include <bits/stdc++.h>

using namespace std;
 int main()
 {
 	int a[3];
 	int b[3];  int c[2]; int ap=0; int bp=0;
 	for (int i=0;i<3;i++)
	 {
	 	cin>>a[i];
	  } 
	  for (int j=0;j<3;j++)
	 {
	 	cin>>a[j];
	  } 
	   for (int z=0;z<3;z++)
	   {
	   	if(a[z]>b[z])
	   	ap++;
	   	
	   	else if (a[z]<b[z])
	   	bp++;
	   	
	   }
	   c[0]=ap;
	   c[1]=bp;
	   cout<<c[0]<<" "<<c[1];
 	return 0;
 }
