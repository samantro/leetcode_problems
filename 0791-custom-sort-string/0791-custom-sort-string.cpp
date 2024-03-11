class Solution {
public:
    string customSortString(string order, string s) {
        int a[26]={0};
        for (int i = 0; i < s.size(); ++i) {
            a[s[i] - 'a']++;
        }
        string res = "";
        for(auto i:order){
            while(a[i-'a']-->0) res+=i;
        }
        for(auto i:s){
            while(a[i-'a']-->0) res+=i;
        }
        return res;
    }
};