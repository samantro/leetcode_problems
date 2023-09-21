class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(merged));
        
        int n = merged.size();
        if(n % 2 == 0) return (double)(merged[n / 2 - 1] + merged[n / 2]) / 2.0;
        else return (double)merged[n / 2];
    }
};