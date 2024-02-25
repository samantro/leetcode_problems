class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(++mp[nums[i]]>2) return false;
        }
        return true;
    }
};