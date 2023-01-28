//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    unordered_map<string,bool> dp;

    bool solve(string s1, string s2) {
        if(s1 == s2) return true;

        if(dp.find(s1 + s2) != dp.end()) return dp[s1 + s2];

        int n = s1.size();
        bool sub_check = false;

        for(int i=1;i<n;i++) {
            bool swap = (solve(s1.substr(0,i), s2.substr(n-i,i)) && solve(s1.substr(i,n-i), s2.substr(0,n-i)));
            bool not_swap = (solve(s1.substr(0,i), s2.substr(0,i)) && solve(s1.substr(i,n), s2.substr(i,n)));

            if(swap || not_swap) {
                sub_check = true;
                break;
            }
        }

        return dp[s1 + s2] = sub_check;
    }
    bool isScramble(string s1, string s2){
        //code here
        if(s1.size() != s2.size()) return false;
        if(s1 == "" && s2 == "") return true;
        return solve(s1, s2);
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends