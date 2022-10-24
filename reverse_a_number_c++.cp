#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the Number: ";
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<"The Reverse of a Number is: "<<stoi(s);
    return 0;
}
