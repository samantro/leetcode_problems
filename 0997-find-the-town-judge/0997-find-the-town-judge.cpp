class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        if(n==1) return 1;
        if(t.size()==0) return -1;
        set<int> s;
        map<int,set<int>> m;
        for(int i=0;i<t.size();i++){
            s.insert(t[i][0]);
            m[t[i][0]].insert(t[i][1]);
        }
        if(s.size()==n) return -1;
        int k=accumulate(s.begin(),s.end(),0);
        k=n*(n+1)/2 - k;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second.find(k)==i->second.end()) return -1;
        }
        return k;
    }
};