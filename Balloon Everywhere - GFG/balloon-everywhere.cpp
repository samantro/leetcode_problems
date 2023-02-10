//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        string a="ablon";
        map<char,int> m;
        for(int i=0;i<a.size();i++) m[a[i]]=0;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()) m[s[i]]++;
        }
        m['l']/=2;
        m['o']/=2;
        int res=INT_MAX;
        for(auto i:m) res=min(res,i.second);
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends