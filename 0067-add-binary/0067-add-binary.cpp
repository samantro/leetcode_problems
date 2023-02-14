class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size()) swap(a,b);
        int c=0;
        for(int i=b.size()-1,j=a.size()-1;i>=0;i--,j--){
            int k=(a[j]-'0') + (b[i]-'0');
            // cout<<k<<" ";
            if(k==0){
                a[j] = c==0?'0':'1';
                c=0;
            }
            else if(k==1){
                if(c==0) a[j]= '1';
                else {
                    a[j]= '0';
                    c=1;
                }
            }
            else{
                a[j] = c==0?'0':'1';
                c=1;
            }
        }
        int i=a.size()-b.size()-1;
        while(c && i>=0){
            if(a[i]=='0'){
                a[i]='1';
                c=0;
            }else{
                a[i]='0';
                c=1;
            }
            i--;
        }
        if(c) a='1'+a;
        return a;
    }
};