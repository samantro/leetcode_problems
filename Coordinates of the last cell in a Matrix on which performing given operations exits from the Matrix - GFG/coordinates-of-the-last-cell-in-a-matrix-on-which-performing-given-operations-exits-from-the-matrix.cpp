//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> res;
    void solve(int i,int j,int n,int m,vector<vector<int>> mat,char dir){
        // cout<<i<<" "<<j<<endl;
        if(i<0 || i==n){
            if(i<0) res.first=i+1;
            else res.first=i-1;
            res.second=j;
            return;
        }else if(j<0 || j==m){
            res.first=i;
            if(j<0) res.second=j+1;
            else res.second=j-1;
            return;
        }
        if(mat[i][j]==0){
            switch(dir){
                case 'r':solve(i,j+1,n,m,mat,dir); break;
                case 'l':solve(i,j-1,n,m,mat,dir); break;
                case 'u':solve(i-1,j,n,m,mat,dir); break;
                case 'd':solve(i+1,j,n,m,mat,dir); break;
            }
        }else{
            mat[i][j]=0;
            switch(dir){
                case 'r':solve(i+1,j,n,m,mat,'d'); break;
                case 'l':solve(i-1,j,n,m,mat,'u'); break;
                case 'u':solve(i,j+1,n,m,mat,'r'); break;
                case 'd':solve(i,j-1,n,m,mat,'l'); break;
            }
        }
        
    }
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        solve(0,0,matrix.size(),matrix[0].size(),matrix,'r');
        return res;
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends