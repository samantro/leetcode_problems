class Solution {
public:
    vector<vector<int>> res;
    void fun(int s,int d,vector<vector<int>>& g,vector<int> v){
        if(s==d){
            res.push_back(v);
            return;
        }
        for(int i=0;i<g[s].size();i++){
            v.push_back(g[s][i]);
            fun(g[s][i],d,g,v);
            v.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> v;
        v.push_back(0);
        fun(0,graph.size()-1,graph,v);
        return res;
    }
};