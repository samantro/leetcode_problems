class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        string s="";
        unsigned int n=num;
        while(n){
            int k=n%16;
            if(k<10) s=to_string(k)+s;
            else {
                k%=10;
                char c= 'a'+k;
                s=c+s;
            }
            n/=16;
        }
        return s;
    }
};