//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    // Code here
		    int n = s.size(), dp = 0, dp1 = 1, dp2 = 0,m=1000000007;
            for (int i = n - 1; i >= 0; --i) {
                if (s[i] != '0') // Single digit
                    dp = (dp + dp1)%m;
                if (i+1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i+1] <= '6')) // Two digits
                    dp = (dp + dp2)%m;
                dp2 = dp1;
                dp1 = dp;
                dp = 0;
            }
            return dp1;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends