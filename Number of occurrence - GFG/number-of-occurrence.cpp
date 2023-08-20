//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int left (int a[],int i,int j,int x){
	    int ans = -1;
	    while(i<=j){
	        int m = (i+j)/2;
	        if(a[m]==x){
	            ans=m;
	            j=m-1;
	        }
	        else if(a[m]>x) j=m-1;
	        else i=m+1;
	    }
	    return ans;
	}
	int right (int a[],int i,int j,int x){
	    int ans = -1;
	    while(i<=j){
	        int m = (i+j)/2;
	        if(a[m]==x){
	            ans=m;
	            i=m+1;
	        }
	        else if(a[m]>x) j=m-1;
	        else i=m+1;
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int l = left(arr,0,n-1,x);
	    int r = l!=-1 ? right(arr,l,n-1,x) : -2;
	    return r-l+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends