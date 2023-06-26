class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> q1,q2;
        long long res=0;
        int n=costs.size()-1;
        int i=0;
        
        while(k--){
            while(q1.size() < candidates && i <= n){
                q1.push(costs[i++]);
            }
            while(q2.size() < candidates && i <= n){
                q2.push(costs[n--]);
            }

            int t1 = q1.size() > 0 ? q1.top() : INT_MAX;
            int t2 = q2.size() > 0 ? q2.top() : INT_MAX;

            if(t1 <= t2){
                res += t1;
                q1.pop();
            }
            else{
                res += t2;
                q2.pop();
            }
        }
        return res;
    }
};