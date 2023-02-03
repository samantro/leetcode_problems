class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<t.size();++i) q.push({t[i],i});
        int res=0;
        while(!q.empty()){
            pair<int,int> p=q.front();
            if(q.size()==1){
                res+=p.first;
                return res;
            }
            q.pop();
            res++;
            p.first--;
            if(p.second==k && p.first==0) return res;
            if(p.first!=0) q.push(p);
        }
        return 0;
    }
};