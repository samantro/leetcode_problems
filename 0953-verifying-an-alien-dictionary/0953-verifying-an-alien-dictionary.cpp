class Solution {
public:
    
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for(int i=0;i<26;i++) m[order[i]]=i;
        for(int i=0;i<words.size()-1;i++){
            int as=words[i].size(),bs=words[i+1].size(),f=1;
            for(int j=0;j<as && j<bs;j++){
                if(m[words[i][j]]<m[words[i+1][j]]){
                    f--;
                    break;
                }
                if(m[words[i][j]]>m[words[i+1][j]]) return false;
            }
            if(f && as>bs) return false;
        }
        return true;
    }
};