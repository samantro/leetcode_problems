//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){

        // Code here

        int mid=-1;

        vector<int>pref,ans;

        pref.push_back(a[0]);

        for(int i=1;i<a.size();i++)pref.push_back(a[i]+pref[i-1]);

        for(int i=0;i<a.size();i++){

            if(i%2==0)mid++;

            int x=a[mid];

            if(mid==0)ans.push_back(pref[i]-(i+1)*x);

            else{

                ans.push_back((pref[i]-pref[mid-1])-(i-mid+1)*x+(mid)*x-pref[mid-1]);

            }

        }

        return ans;

    }

};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends