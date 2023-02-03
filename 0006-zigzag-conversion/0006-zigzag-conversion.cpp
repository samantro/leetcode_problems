class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==n || numRows==1) return s;
        vector<string> v(numRows);
        for(int i=0;i<n;){
            for(int j=0;j<numRows && i<n;j++,i++) v[j]+=s[i];
            for(int j=numRows-2;j>0 && i<n;j--,i++) v[j]+=s[i];
        }
        string res="";
        for(int j=0;j<numRows;j++) res+=v[j];
        return res;
    }
};