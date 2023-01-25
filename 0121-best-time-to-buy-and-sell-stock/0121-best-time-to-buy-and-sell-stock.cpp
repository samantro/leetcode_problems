class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=0,n=p.size()-1;;
        priority_queue<int> q;
        q.push(p[n]);
        for(int i=n-1;i>=0;i--){
            m=max(m,q.top()-p[i]);
            // cout<<q.top()<<' ';
            q.push(p[i]);
        }
        return m;
    }
};