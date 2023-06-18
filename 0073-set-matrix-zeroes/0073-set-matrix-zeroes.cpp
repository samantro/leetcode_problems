class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int c=1;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(!mat[i][j]){
                    mat[i][0]=0;
                    if(j) mat[0][j]=0;
                    else c=0;
                }
            }
        }
        for(int i=1;i<mat.size();i++){
            for(int j=1;j<mat[0].size();j++){
                if(mat[i][j]){
                    if(!mat[i][0] || !mat[0][j]) mat[i][j]=0;
                }
            }
        }
        if(!mat[0][0]){
            for(int i=0;i<mat[0].size();i++) mat[0][i]=0;
        }
        if(!c){
            for(int i=0;i<mat.size();i++) mat[i][0]=0;
        }
        
    }
};