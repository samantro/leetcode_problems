class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> v(n);
        for(auto &i: edges){
            v[i[1]]++;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(!v[i])ans.push_back(i);
        }
        return ans;
    }
};