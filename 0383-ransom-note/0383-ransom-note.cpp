class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
        for(int i=0;i<ransomNote.size();i++) a[ransomNote[i]-'a']++;
        for(int i=0;i<magazine.size();i++) a[magazine[i]-'a']--;
        for(int i=0;i<26;i++) if(a[i]>0) return false;
        return true;
    }
};