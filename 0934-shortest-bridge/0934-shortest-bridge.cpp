class Solution {
public:
	int shortestBridge(vector<vector<int>>& grid) {
		vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
		int chk=1;
		for(int i=0; i<grid.size(); i++){
			for(int j=0; j<grid[0].size(); j++){
				if(!v[i][j] && grid[i][j]){
					v[i][j]=1;
					queue<pair<int, int>>q;
					q.push({i, j});
					while(!q.empty()){
						int x=q.front().first, y=q.front().second;
						q.pop();
						if(x>0 && !v[x-1][y] && grid[x-1][y]){
							v[x-1][y]=1;
							q.push({x-1, y});
						}
						if(y>0 && !v[x][y-1] && grid[x][y-1]){
							v[x][y-1]=1;
							q.push({x, y-1});
						}
						if(x<grid.size()-1 && !v[x+1][y] && grid[x+1][y]){
							v[x+1][y]=1;
							q.push({x+1, y});
						}
						if(y<grid[0].size()-1 && !v[x][y+1] && grid[x][y+1]){
							v[x][y+1]=1;
							q.push({x, y+1});
						}
					}
					chk=-1; break;
				}
			}
			if(chk==-1){break;}
		}
		queue<pair<pair<int, int>, int>>q;
		for(int i=0; i<grid.size(); i++){
			for(int j=0; j<grid[0].size(); j++){
				if(v[i][j]){
					q.push({{i, j}, 0});
					
				}
			}
		}
		int ans=INT_MAX;
		while(!q.empty()){
			int x=q.front().first.first, y=q.front().first.second, cnt=q.front().second;
			q.pop();
			if(x>0 && !v[x-1][y] && !grid[x-1][y]){
				v[x-1][y]=1;
				q.push({{x-1, y}, cnt+1});
			}
			else if(x>0 && !v[x-1][y] && grid[x-1][y]){
				ans=min(ans, cnt);
			}
			if(y>0 && !v[x][y-1] && !grid[x][y-1]){
				v[x][y-1]=1;
				q.push({{x, y-1}, cnt+1});
			}
			else if(y>0 && !v[x][y-1] && grid[x][y-1]){
				ans=min(ans, cnt);
			}
			if(x<grid.size()-1 && !v[x+1][y] && !grid[x+1][y]){
				v[x+1][y]=1;
				q.push({{x+1, y}, cnt+1});
			}
			else if(x<grid.size()-1 && !v[x+1][y] && grid[x+1][y]){
				ans=min(ans, cnt);
			}
			if(y<grid[0].size()-1 && !v[x][y+1] && !grid[x][y+1]){
				v[x][y+1]=1;
				q.push({{x, y+1}, cnt+1});
			}
			else if(y<grid[0].size()-1 && !v[x][y+1] && grid[x][y+1]){
				ans=min(ans, cnt);
			}
        }
		return ans;
	}
};