//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int res=0,m=0;
        if(s.size()==1) return 1;
        int i=s.size()/2;
        for(;i>=0;i--){
            if(i+i<s.size() && s.substr(0,i+1)==s.substr(i+1,i+1)){
                break;
            }
        }
        return s.size()-i;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends