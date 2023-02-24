class Solution {
public:
    int res=0;
    void solve(int i,vector<int>& nums,int ans){
        if(i==nums.size()) return;
        res+=(ans^nums[i]);
        solve(i+1,nums,ans^nums[i]);
        solve(i+1,nums,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        solve(0,nums,0);
        return res;
    }
};