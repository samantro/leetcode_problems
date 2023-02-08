class Solution {
public:

    int mr[8][2]={
        {1,0},{-1,0},{0,1},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}
    };
    int row,col;
    int solve(vector<vector<int>>&grid){
    if(grid[0][0] || grid[row-1][col-1] ) return -1;

        if(row==col && row == 1) return row;

        vector<vector<bool>> ch(row,vector<bool>(col,false));
        queue<pair<pair<int,int>,int>> q;

        int ans=INT_MAX;

        q.push({{0,0},1});
        ch[0][0]=1;

        while(!q.empty()){

            int r = q.front().first.first;
            int c = q.front().first.second;
            int d = q.front().second;
            q.pop();

            for(int i=0;i<8;i++){

                int x = r + mr[i][0];
                int y = c + mr[i][1];

                if(x<row && y<col && x>=0 && y>=0 && !ch[x][y] && !grid[x][y]){
                    ch[x][y]=true;
                    if(x==row-1 && y==col-1 ) return min(ans,d+1);
                    q.push({{x,y},d+1});
                }
            }
        }
        return -1;
    }

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      row = grid.size();
      col = grid[0].size();
         
        return solve(grid);
    }
};