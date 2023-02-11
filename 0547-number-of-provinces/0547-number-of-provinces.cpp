class Solution {
public:
    vector<int> g[205];
    int n, m, vis[205];

    void dfs(int u) {
        vis[u] = 1;
        for(auto v: g[u]) {
            if(!vis[v]) dfs(v);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        memset(vis, 0, sizeof(vis));
        n = isConnected.size(), m = isConnected[0].size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(isConnected[i][j]) {
                    g[i].push_back(j);
                }
            }
        }

        int ans = 0;
        for(int u=0; u<n; u++) {
            if(!vis[u]) {
                ans++;
                dfs(u);
            }
        }
        return ans;
    }
};