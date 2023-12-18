class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size()-1;
        int m=INT_MIN,sm=INT_MIN,mi=INT_MAX,smi=INT_MAX;
        for(int i=0;i<=n;i++){
            if(nums[i]>=m){
                sm=m;
                m=nums[i];
            }else if(nums[i]>sm) sm = nums[i];
            if(nums[i]<=mi){
                smi=mi;
                mi=nums[i];
            }else if(nums[i]<smi) smi = nums[i];
            
        }
        return m*sm - mi*smi;
    }
};