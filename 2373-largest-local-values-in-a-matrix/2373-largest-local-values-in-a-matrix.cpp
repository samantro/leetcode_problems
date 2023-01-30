class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& a) {
        int n=a.size()-2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n+2;j++){
                a[i][j]=max(a[i][j],max(a[i+1][j],a[i+2][j]));
            }
        }
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=max(a[i][j],max(a[i][j+1],a[i][j+2]));
            }
        }
        return v;
    }
};