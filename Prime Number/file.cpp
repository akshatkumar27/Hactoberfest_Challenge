#include <bits/stdc++.h>
using namespace std;

void check(int a){
    int c=0;
    for(int i=1;i<=a;i++){
        if(a%i==0) c+=1;
    }
    if(c==2) cout<<"\nIts a Prime Number";
    else cout<<"\nIts Not a Prime Number";
}

int main() {
    int a;
    cout<<"Enter the Number: ";
    cin>>a;
    check(a);
    return 0;
}
