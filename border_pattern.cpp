#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ 
	#ifndef ONILE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    int n;
    cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n-1)
		for(int j =0;j<n-1;j++)
		printf("*");
		else
		printf("\n");
	//	for(int z=1)
			printf("*"); 
	    
	}
}
