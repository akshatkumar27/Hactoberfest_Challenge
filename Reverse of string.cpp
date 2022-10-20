#include <iostream>
using namespace std;
void reverse(char st[]);
int main()
{   
  
  char  st[50];
  cout<<"Enter the  String: ";
  cin.getline(st,50);
  reverse(st);
  return 0;
}
void reverse(char st[])
{  
int x;
for(int i=0;st[i]!='\0';i++ ){
	x++;
  }
for(int i=x-1;i>=0;i-- ){
	if(st[i]!='\0'){
	cout<<st[i];
  }
}
  return ;
}

