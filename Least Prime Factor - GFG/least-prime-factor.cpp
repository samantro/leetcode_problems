//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int fun(int a){
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0) return i;
        }
        return a;
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> res={0};
        if(n>=1) res.push_back(1);
        for(int i=2;i<=n;i++) res.push_back(fun(i));
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends