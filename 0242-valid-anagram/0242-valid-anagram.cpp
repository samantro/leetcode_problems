class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss=s.size(),ts=t.size();
        if(ts!=ss) return false;
        int a[26]={0},b[26]={0};
        for(int i=0;i<ss;i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++) if(a[i]!=b[i]) return false;
        return true;
    }
};