//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        int i=0,res=0,k=0;
        string s="";
        while(n){
            if(n&1) s='1'+s;
            else s='0'+s;
            n>>=1;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'){
                k++;
                res<<=1;
                res++;
            }else{
                k=0;
                res<<=1;
            }
            if(k==3){
                res^=1;
                k=0;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends