class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=0,n=p.size()-1;
        int k=p[n];
        for(int i=n-1;i>=0;i--){
            m=max(m,k-p[i]);
            k=max(p[i],k);
        }
        return m;
    }
};