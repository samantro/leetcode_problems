//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int dp[1000001]={0};
	int solve(int i,int *a,int n){
	    if(i>=n) return 0;
	    if(dp[i]!=0) return dp[i];
	    return dp[i]=*(a+i) + max(solve(i+2,a,n),solve(i+3,a,n));
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    return max(solve(0,arr,n),solve(1,arr,n));
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends