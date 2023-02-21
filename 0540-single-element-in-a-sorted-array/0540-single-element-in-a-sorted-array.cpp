class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1,n=nums.size();
        if(n==1 || (nums[0]^nums[1])!=0) return nums[0];
        if((nums[j]^nums[j-1])!=0) return nums[j];
        while(i<j){
            int m=(i+j)/2;
            if(m-1>=0 && (nums[m]^nums[m-1])==0){
                if((n-m+1)%2) i=m;
                else j=m-1;
            }
            else if(m+1<n && (nums[m]^nums[m+1])==0){
                if((n-m)%2) i=m+1;
                else j=m;
            }
            else return nums[m];
        }
        return nums[j];
    }
};