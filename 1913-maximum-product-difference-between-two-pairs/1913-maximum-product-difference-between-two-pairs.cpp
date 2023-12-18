class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n=nums.size()-1;
        return nums[n]*nums[n-1] - nums[1]*nums[0];
    }
};