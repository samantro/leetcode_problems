class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int c=m[0].size()-1,r=0;
        while(r<m.size() && c>=0){
            if(m[r][c]==t) return true;
            if(m[r][c]>t) c--;
            else r++;
        }
        return false;
    }
};