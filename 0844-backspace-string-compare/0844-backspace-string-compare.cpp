class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss,ts;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !ss.empty()) ss.pop();
            else if(s[i]=='#') continue; 
            else ss.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !ts.empty()) ts.pop();
            else if(t[i]=='#') continue; 
            else ts.push(t[i]);
        }
        return ss==ts;
    }
};