class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<int>>& g){
        if(i<0 || j<0 || i==n || j==m) return 0;
        if(g[i][j]){
            g[i][j]=0;
            return solve(i-1,j,n,m,g)+solve(i,j-           1,n,m,g)+solve(i+1,j,n,m,g)+solve(i,j+1,n,m,g)+1;
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res=max(res,solve(i,j,n,m,grid));
            }
        }
        return res;
    }
};