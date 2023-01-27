class Solution {
public:
    int search(vector<int>& nums, int t) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]==t) return m;
            if(nums[m]>t) j=m-1;
            else i=m+1;
        }
        return -1;
    }
    
};