class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int res=0,n=grid.size();
        for(int i=0;i<n;i++){
            int m1=0,m2=0;
            for(int j=0;j<n;j++){
                m1=max(m1,grid[i][j]);
                m2=max(m2,grid[j][i]);
                if(grid[i][j]) res++;
            }
            res+=(m1+m2);
        }
        return res;
    }
};