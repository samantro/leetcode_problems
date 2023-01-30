class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& a) {
        int res=0,n=a.size();
        for(int i=0;i<n;i++){
            sort(a[i].begin(),a[i].end());
        }
        for(int i=a[0].size()-1;i>=0;i--){
            int m=0;
            for(int j=0;j<n;j++){
                m=max(m,a[j][i]);
            }
            res+=m;
        }
        return res;
    }
};