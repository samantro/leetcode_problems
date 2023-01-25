class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++) m[s[i]]++;
        int ma=0,res=0,k=0;
        for(auto i:m){
            if(i.second%2){
                k+=i.second-1;
                ma++;
            }
            else res+=i.second;
        }
        if(ma==0) return res;
        return res+k+1;
    }
};