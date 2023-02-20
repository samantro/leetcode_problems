class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        for(int i=0;i<arr.size()-1;i++) arr[i+1]+=arr[i];
        int res=0; 
        if(arr[k-1]/k>=threshold) res++;
        for(int i=k;i<arr.size();i++){
            if((arr[i]-arr[i-k])/k>=threshold) res++;
        }
        return res;
    }
};