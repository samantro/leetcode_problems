class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res=0; 
        for(int i=0;i<arr.size();i++){
            if(i<arr.size()-1) arr[i+1]+=arr[i];
            if(i>=k && (arr[i]-arr[i-k])/k>=threshold) res++;
        }
        if(arr[k-1]/k>=threshold) res++;
        return res;
    }
};