class Solution {
public:
    char repeatedCharacter(string s) {
        int a[26]={0};
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
            if(a[s[i]-'a']==2) return s[i];
        }
        return -1;
    }
};