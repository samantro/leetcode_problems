//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        if(N==1) return 0;
        long long int res=3, m=1000000007;
        for(int i=3;i<=N;i++){
            res= (res * 3)%m;
            if(i&1) res-=3;
            else res+=3;
        }
        return res%m;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends