//Logical Approach 

class Solution {
public:
      bool isSafe(int** arr, int x, int y, int n){
       for(int i=row; row<x;row++){
           if(arr[row][y] == 1)
               return false;
       } 
       int row = x;
       int col = y;
       while(row>=0 && col>=0) {
           if(arr[row][col]==1)
               return false;
           row--;
           col--;
       }
       row = x;
       col = y;
       while(row>=0 && col<n) {
           if(arr[row][col]==1)
               return false;
           row--;
           col++;
       }
       return true;
      }     
       
      bool nQueen(int** arr, int x){
         if(x>=n){
             return true; //NQueens is placed
         }    
         //chk wheter position is safe or not for that
         for(int col=0;col<n;col++){
             if(isSafe(arr,x,col,n)){
                 arr[x][col] = 1;
                 //Chk for next row whetr we can place queen or not
                 if(nQueen(arr, x+1, n))
                     return true; //backtracking 
             }
         }  
         return false  
       } //x take count of row
};

//Optimal Approach 
class Solution {
 vector<vector<string>> ans;
 public:
	bool issafe(int r,int c,vector<string>&v,int n){
		//column check 
		for(int i=0;i<=r;i++){
			if(v[i][c]=='Q') return false;
		}
		//diagonal check upper left side
		int row=r,col=c;
		while(row>=0 && col>=0){
			if(v[row][col]=='Q') return false;
			row--,col--;
		}
		//diagonal check upper right side
		row=r,col=c;
		while(row>=0 && col<n){
			if(v[row][col]=='Q') return false;
			row--,col++;
		}
		return true;
	}
	void helper(int r,vector<string> &v,int n){
		 if(r==n){ //if row reaches end of the board 
			 ans.push_back(v);
			 return ;
		 }
		 for(int i=0;i<n;i++){  //fixing row and traversing in column
			if(issafe(r,i,v,n)){
				v[r][i]='Q';
				helper(r+1,v,n);
				v[r][i]='.';
			}
		 }
	}
	vector<vector<string>> solveNQueens(int n) {
		vector<string> v;
		string s(n,'.');
		for(int i=0;i<n;i++) v.push_back(s);
		helper(0,v,n);
		return ans;
	}
};
