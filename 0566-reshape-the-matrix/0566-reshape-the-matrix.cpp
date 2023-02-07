class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size(),m=mat[0].size();
        if(m*n!=r*c) return mat;
        for(int i=1;i<mat.size();i++){
            mat[0].insert(mat[0].end(),mat[i].begin(),mat[i].end());
        }
        vector<vector<int>> v(r,vector<int>(c));
        int i=0;
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++) v[j][k]=mat[0][i++];
        }
        return v;
    }
};