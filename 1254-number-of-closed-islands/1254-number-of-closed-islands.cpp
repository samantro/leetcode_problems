class Solution {
public:
    vector<pair<int,int>>dir{{0,1},{0,-1},{-1,0},{1,0}};
    int n,m;

    bool dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=n || j>=m) return false;
        if(grid[i][j] == 1 || grid[i][j] == 2) return true;
        grid[i][j] = 2;

        bool flag = true;
        for(auto it : dir){
            flag &= dfs(grid,i+it.first,j+it.second);
        }
        return flag;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 || grid[i][j] == 2) continue;
                if(dfs(grid,i,j)){
                    cout<<i<<" "<<j<<endl;
                    ans++;
                }
            }
        }
      
        return ans;
    }
};