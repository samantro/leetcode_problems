class Solution {
public:
    string getHint(string s, string g) {
        int a[10]={0},b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]) b++;
            else a[s[i]-'0']++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=g[i] && a[g[i]-'0']-->0) c++;
        }
        return to_string(b) + 'A' + to_string(c) + 'B';
    }
};