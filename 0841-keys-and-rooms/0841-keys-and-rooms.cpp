class Solution {
public:
    void solve(int i,int n,vector<vector<int>>& r,vector<int>& vis){
        if(vis[i]) return;
        vis[i]=1;
        bool ans=false;
        for(auto j:r[i]){
            solve(j,n,r,vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(),0);
        solve(0,rooms.size(),rooms,vis);
        return accumulate(vis.begin(),vis.end(),0)==rooms.size();
    }
};