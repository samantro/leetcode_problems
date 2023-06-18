class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> c(m,0),r(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!mat[i][j]){
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(r[i]){
                for(int j=0;j<m;j++) mat[i][j] = 0;
            }
        }
        for(int i=0;i<m;i++){
            if(c[i]){
                for(int j=0;j<n;j++) mat[j][i] = 0;
            }
        }
    }
};