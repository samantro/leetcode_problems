class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
            for(int i=m+n-1,j=m-1;i>=n && j>=0;i--,j--) nums1[i]=nums1[j];
            int i=n,j=0,k=0;
            while(i<m+n && j<n){
                if(nums1[i]<=nums2[j]) nums1[k++]=nums1[i++];
                else nums1[k++]=nums2[j++];
            }
            while(j<n) nums1[k++]=nums2[j++];
        
    }
};