class Solution {
public:
    vector<vector<int>> res;
    void solve(int i,int n){
        if(n==i) return;
        vector<int> v;
        v.push_back(1);
        for(int j=0;j<i-1;j++){
            v.push_back(res[i-1][j]+res[i-1][j+1]);
        }
        v.push_back(1);
        res.push_back(v);
        solve(i+1,n);
    }
    vector<vector<int>> generate(int n) {
        res.push_back({1});
        if(n==1) return res;
        res.push_back({1,1});
        if(n==2) return res;
        solve(2,n);
        return res;
    }
};