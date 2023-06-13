class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        int n=g.size();
        vector<vector<int>> v(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[j][i]=g[i][j];
            }
        } 
        // cout<<2<<endl;
        int res = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) res+=(v[i]==g[j] ? 1 : 0);
        }
        return res;
    }
};