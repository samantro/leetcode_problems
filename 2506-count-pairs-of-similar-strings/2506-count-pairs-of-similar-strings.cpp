class Solution {
public:
    int similarPairs(vector<string>& w) {
        unordered_map<int,int> s;
        int res=0;
        for(int i=0;i<w.size();i++){
            int t=0;
            for(int j=0;j<w[i].size();j++){
                if(t&(1<<(w[i][j]-'a'))) continue;
                else t^=(1<<(w[i][j]-'a'));
            }
            if(s.find(t)!=s.end()) res+=s[t];
            s[t]++;
        }
        return res;
    }
};