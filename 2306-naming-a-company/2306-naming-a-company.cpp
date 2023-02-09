class Solution {
    #include <string.h>
public:
    long long distinctNames(vector<string>& id) {
        int n=id.size();
        vector<unordered_set<string>> v(26);
        long long res=0;
        for(int i=0;i<n;i++) v[id[i][0]-'a'].insert(id[i].substr(1));
        for(auto i=0;i<25;i++){
            for(int j=i+1;j<26;j++){
                int ans=0;
                for(auto k:v[j]){
                    if(v[i].find(k)!=v[i].end()) ans++;
                }
                res+= 2LL*((v[i].size()-ans)*(v[j].size()-ans));
            }
        }
        return res;
        
    }
};