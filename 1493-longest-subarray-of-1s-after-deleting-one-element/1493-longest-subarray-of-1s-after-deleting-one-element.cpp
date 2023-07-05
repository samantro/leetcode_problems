class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int f=0,l=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(l==l+nums[i]){
                f=l;
                l=0;
            }else l++;
            res = max(res,f+l);
        }
        if(res==nums.size()) res--;
        return res;
    }
};