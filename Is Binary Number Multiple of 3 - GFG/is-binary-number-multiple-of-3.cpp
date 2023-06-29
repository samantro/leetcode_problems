//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int res=0, pow=1;
	    for(int i=s.size()-1;i>=0;i--){
	        if(s[i]-'0') res = (res%3 + pow%3)%3;
	        pow = (pow<<1)%3;
	    }
	    return res%3==0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends