class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s.size()!=g.size()) return false;
        if(s==g){
            set<char> m(s.begin(),s.end());
            return s.size()!=m.size();
        };
        multiset<char> m1,m2;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=g[i]){
                m1.insert(s[i]);
                m2.insert(g[i]);
            }
        }
        if(m1.size()!=2) return false;
        return m1==m2;
    }
};