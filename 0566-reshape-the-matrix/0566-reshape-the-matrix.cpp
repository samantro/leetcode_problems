class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(),m=mat[0].size();
        if(m*n!=r*c) return mat;
        int k=0,l=0;
        vector<vector<int>> v(r,vector<int>(c));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[k][l++]=mat[i][j];
                if(l==c){
                    l=0;
                    k++;
                }
            }
        }
        return v;
    }
};