class Solution {
public: 
    set<vector<int>> s;
    void fun(int i,vector<int>& nums,vector<int> v){
        int n=nums.size();
        if(i>=n){
            if(v.size()>=2) s.insert(v);
            return ;
        }
        fun(i+1,nums,v);
        if(v.size()==0 || v.back()<=nums[i]){
            v.push_back(nums[i]);
            fun(i+1,nums,v);
        } 
        

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> v;
        fun(0,nums,v);
        return vector(s.begin(),s.end());
    }
};