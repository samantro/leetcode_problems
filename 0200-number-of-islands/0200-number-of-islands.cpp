class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
     int count=0;
        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++)
                if(fun(grid,i,j))
                count++;
        return count;
    }
    bool fun(vector<vector<char>>&grid,int r,int c)
    {  
        
    if(r<0 || r==grid.size() || c<0 ||   c==grid[0].size())
            return false;
        if(grid[r][c]=='0')
            return false;
    
       grid[r][c]='0';
        // up
     fun(grid,r-1,c);
        // down
        fun(grid,r+1,c);
        // right
       fun(grid,r,c+1);
        // left
       fun(grid,r,c-1);
        return true;
    }
};