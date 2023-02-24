class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int res=0,k=0;
        while(n){
            if(!(n&1)) res|=(1<<k);
            n>>=1;
            k++;
        }
        return res;
    }
};