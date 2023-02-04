class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int p) {
        if(words.size()==1) return words;
        sort(words.begin(),words.end());
        map<int,vector<string>> m;
        for(int i=0;i<words.size()-1;i++){
            int k=1;
            while(i+1<words.size() && words[i]==words[i+1]){
                k++;
                i++;
            } 
            m[k].push_back(words[i]);
        }
        if(words[words.size()-1]!=words[words.size()-2]) m[1].push_back(words[words.size()-1]);
        vector<string> res;
        for(auto i=m.rbegin();i!=m.rend();i++) {
            for(int j=0;j<i->second.size() && p>0;j++){
                res.push_back(i->second[j]);
                p--;
            }
            if(p==0) break;
        }
        return res;
    }
};