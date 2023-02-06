class Solution {


public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        
        vector<vector<int>> visited(m, vector<int>(n, false));
        
        queue<pair<int, int>> boundaryCordinates;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                //If the point is on the boundary
                if(i==0 || j==0 || i==m-1 || j==n-1){
                    if(grid[i][j] == 1){
                        visited[i][j] = true;
                        boundaryCordinates.push({i, j});
                    }
                }else
                    continue;
            }
        }
        
        vector<int> x = {+1, -1, 0, 0};
        vector<int> y = {0, 0, +1, -1};
        
        while(!boundaryCordinates.empty()){
            pair<int, int> coordinates = boundaryCordinates.front();
            boundaryCordinates.pop();
            
            for(int i=0; i<4; i++){
                int nRow = coordinates.first + x[i];
                int nCol = coordinates.second + y[i];
                
                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && grid[nRow][nCol] && !visited[nRow][nCol]){
                    boundaryCordinates.push({nRow, nCol});
                    visited[nRow][nCol] = true;
                }
            }
        }
        
        int ans = 0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1 && !visited[i][j]) ans++;
            }
        }
        
        return ans;
    }
};