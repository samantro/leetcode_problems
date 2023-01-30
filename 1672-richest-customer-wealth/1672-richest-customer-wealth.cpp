class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int res=0;
        for(int i=0;i<a.size();i++){
            res=max(res,accumulate(a[i].begin(),a[i].end(),0));
        }
        return res;
    }
};