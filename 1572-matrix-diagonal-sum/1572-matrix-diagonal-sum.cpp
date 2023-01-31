class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res=0,n=mat.size();
        for(int i=0,j=n-1;i<n;i++,j--){
            res+=mat[i][i];
            res+=mat[i][j];
        }
        if(n&1) res-=mat[n/2][n/2];
        return res;
    }
};