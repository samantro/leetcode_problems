class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX,t=0;
        for(int i=0,j=0;j<nums.size();j++){
            t+=nums[j];
            while(t>=target && i<=j){
                res = min(res,j-i+1);
                t-=nums[i++];
            }
        }
        return res<INT_MAX?res:0;
    }
};