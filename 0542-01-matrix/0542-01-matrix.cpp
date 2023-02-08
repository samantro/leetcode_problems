class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                    q.push({i,j});
                else
                    grid[i][j]=-1;
            }
        }
        vector<int> d={-1,0,1,0,-1};
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                pair<int,int> p=q.front();
                q.pop();
                for(int j=0;j<4;j++)
                {
                    int r=p.first+d[j];
                    int c=p.second+d[j+1];
                    if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==-1)
                    {
                        grid[r][c]=1+grid[p.first][p.second];
                        q.push({r,c});
                    }
                }
            }
        }
        return grid;
    }
};