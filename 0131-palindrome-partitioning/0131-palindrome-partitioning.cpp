class Solution {
public:
    vector<vector<string>> res;
    bool check(string s){
        for(int i=0,j=s.size()-1;i<j;i++,j--) if(s[i]!=s[j]) return false;
        return true;
    }
    void fun(int i,string& s,string temp,vector<string> v){
        if(i==s.size()){
            if(temp.empty()) res.push_back(v);
            return;
        }
        temp+=s[i];
        fun(i+1,s,temp,v);
        if(check(temp)){
            v.push_back(temp);
            fun(i+1,s,"",v);
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> v;
        fun(0,s,"",v);
        return res;
    }
};