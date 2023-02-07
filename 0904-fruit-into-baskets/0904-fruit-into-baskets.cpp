class Solution {
public:
    int totalFruit(vector<int>& f) {
        map<int,int> m;
        int i=0,res=0;
        for(int j=0;j<f.size();j++){
            m[f[j]]++;
            while(m.size()>2){
                m[f[i]]--;
                if(m[f[i]]==0) m.erase(f[i]);
                i++;
            }
            res=max(res,j-i+1);
        }
        return res;
    }
};