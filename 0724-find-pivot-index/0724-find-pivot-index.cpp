class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(s==sum-nums[i]-s) return i;
            s+=nums[i];
        }
        return -1;
    }
};