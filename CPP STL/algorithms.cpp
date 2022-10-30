#include<bits/stdc++.h>
using namespace std ;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second) return true ;
    if(p1.second>p2.second) return false;
    if(p1.first>p2.first) return true;
    return false ;
}
int main(){
    vector<int>v={1,4,2,3,6,8,5};
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"\n";
    sort(v.rbegin(),v.rend());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"\n";
// pair<int,int>a[]={{1,2},{2,1},{4,1}};
// int n =*(&a+1)-a; // to calculate size of array 
// sort(a,a+n,comp);
// for(int i=0;i<n;i++){
//     cout<<a[i].first<<" "<<a[i].second<<" ";
// }
// cout<<endl;
int sum=accumulate(v.begin(),v.end(),0);
cout<<sum;
cout<<endl;
int x =7;
int cnt=__builtin_popcount(x);
cout<<cnt<<endl;
string s="abcd"; // first sort then use this technique ..
do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));
int arr[]={1,4,5,678,987,34};
int n =*(&arr+1)-arr;
int max=*max_element(arr,arr+n);
cout<<max<<endl;
int min=*min_element(arr,arr+n);
cout<<min<<endl;
}