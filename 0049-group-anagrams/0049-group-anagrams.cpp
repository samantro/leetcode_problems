class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        map<string,vector<string>> k;
        for(int i=0;i<strs.size();i++)
        {
            string t=strs[i];
            sort(t.begin(),t.end());
            k[t].push_back(strs[i]);
        }
        for(auto i=k.begin();i!=k.end();i++)
            v.push_back(i->second);
        return v;
    }
};