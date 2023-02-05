class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<int>>& g,vector<vector<bool>>& vis){
        if(i<0 || j<0 || i==n || j==m) return 0;
        if(!vis[i][j] && g[i][j]){
            vis[i][j]=true;
            return solve(i-1,j,n,m,g,vis)+solve(i,j-1,n,m,g,vis)+solve(i+1,j,n,m,g,vis)+solve(i,j+1,n,m,g,vis)+1;
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        int res=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res=max(res,solve(i,j,n,m,grid,vis));
            }
        }
        return res;
    }
};