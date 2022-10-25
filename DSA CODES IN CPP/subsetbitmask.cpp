#include <bits/stdc++.h>
using namespace std;

//Time Complexity
//O(N*2^N)

vector<vector<int>> getSubsets(vector<int> num){
    //Num = {1,2,3}
    int size = num.size(); //Size of array = 3
    int subsetNum = (1<<size); //Number of subset = 8
    //Universal for all subset
    vector<vector<int>> allSubsets;

    //This loop is running for 2^n times
    for(int subsetMask = 0; subsetMask<subsetNum; ++subsetMask){ //itereate over 0 to 7
        vector <int> subset;

        //This loop is running for O(n) times
        for(int i=0;i<size;++i){
            //Check ith bit and return the index of that bit
            if((subsetMask & (1<<i) != 0)){
                subset.push_back(num[i]);
            }
        }
        allSubsets.push_back(subset);
    }
    return allSubsets;
}
int main()
{
    int sizee;
    cin >> sizee;
    vector<int> nume;
    for(int i=0;i<sizee;i++){
        int res;
        cin >> res;
        nume.push_back(res);
    }
    vector<vector<int>> result = getSubsets(nume);
    // for(vector<int> print: result){
    //     for(int x: print){
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }


    /*Q) Given an array of size n, n<=15 Find a subsequence such that xor of the subsequnce is max*/
    int maxXor = 0;
    vector<int> ans;
    for(vector<int> subset: result){
        int xorr = 0;
        for(int ele: subset){
            xorr ^= ele;
        }
        if(xorr>maxXor){
            maxXor = xorr;
            ans = subset;
        }
    }
    cout << maxXor;
    return 0;
}