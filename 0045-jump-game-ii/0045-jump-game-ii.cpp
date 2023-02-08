class Solution {
public:
    vector<int> dp;
    int solve(int i,vector<int>& nums){
        if(i>=nums.size()-1) return 0;
        int res=INT_MAX-1;
        if(dp[i]) return dp[i];
        for(int j=1;j<=nums[i];j++) res=min(res,solve(i+j,nums));
        return dp[i]=res+1;
        
    }
    int jump(vector<int>& nums) {
        dp.resize(nums.size());
        return solve(0,nums);
    }
};