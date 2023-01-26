//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        int a[26]={0},b[26]={0};
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z') a[s[i]-'a']++;
            else b[s[i]-'A']++;
        }
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                for(int j=0;j<26;j++){
                    if(a[j]){
                        a[j]--;
                        s[i]='a'+j;
                        break;
                    }
                }
            } 
            else {
                for(int j=0;j<26;j++){
                    if(b[j]){
                        b[j]--;
                        s[i]='A'+j;
                        break;
                    }
                }
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends