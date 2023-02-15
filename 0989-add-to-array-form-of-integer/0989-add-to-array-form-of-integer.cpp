class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int c=0;
        int i=nums.size()-1;
        for(;i>=0 && (k || c);i--){ 
            int p=(k%10+nums[i]+c);
            nums[i]=p%10;
            c=p/10;
            k/=10;
        }
        while(k || c){
            nums.insert(nums.begin(),(k%10+c)%10);
            c=(k%10+c)/10;
            k/=10;
        }
        return nums;
    }
};