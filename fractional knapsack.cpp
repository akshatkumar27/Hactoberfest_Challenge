# include<bits/stdc++.h>
using namespace std;

void print( vector<vector<int>>&s,int i,int j){
    if(i==j){
        cout<<"A";
    }

    else{
        cout<<"(";
               print(s,i,s[i][j]);
               print(s,s[i][j]+1,j);
        cout<<")";
    }







}



//0(n^3)
void mcm(vector<int>arr){

    int n = arr.size();

    vector<vector<int>>dp(n-1,vector<int>(n-1,0));
     vector<vector<int>>s(n-1,vector<int>(n-1,0));

    for(int g=0; g<n-1; g++){
        for(int i=0, j=g; j<n-1; i++,j++){
            if(g==0){
                dp[i][j]=0;
            }
            else if(g==1){
                dp[i][j]=arr[i]*arr[j]*arr[j+1];
                s[i][j]=i;
            }
            else{
                    dp[i][j]=INT_MAX;
                for(int k=i; k<j ; k++){

                    int tc= dp[i][k]+dp[k+1][j]+(arr[i]*arr[k+1]*arr[j+1]);
                   if(tc<dp[i][j]){
                    dp[i][j]= tc;
                    s[i][j]=k;
                                       }


                }
            }








        }
    }
cout<<dp[0][n-2];

print(s,0,n-2);








}












int main(){

int n;
cin>>n;
vector<int>v(n,0);

for(int i=0; i<n; i++){
    cin>>v[i];
}


mcm(v);



}
