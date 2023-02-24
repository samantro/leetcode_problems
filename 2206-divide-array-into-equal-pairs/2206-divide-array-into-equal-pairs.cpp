class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={0};
        for(int i=0;i<nums.size();i++)a[nums[i]]++;
        for(int i=0;i<=500;i++){
            if(a[i]%2) return false;
        }
        return true;
    }
};