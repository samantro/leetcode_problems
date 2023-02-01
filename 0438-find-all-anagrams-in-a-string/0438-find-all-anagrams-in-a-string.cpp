class Solution {
public:
    bool isAnagram(int a[],int b[]){
        for(int i=0;i<26;i++) if(a[i]!=b[i]) return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int ps=p.size(),ss=s.size();
        vector<int> res;
        if(ps>ss) return res;
        int a[26]={0},b[26]={0};
        for(int i=0;i<ps;i++){
            a[s[i]-'a']++;
            b[p[i]-'a']++;
        }
        for(int i=0;i+ps<=ss;i++){
            if(isAnagram(a,b)) res.push_back(i);
            a[s[i]-'a']--;
            if(i+ps<ss) a[s[i+ps]-'a']++;
        }
        return res;
    }
};