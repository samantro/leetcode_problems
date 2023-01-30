class Solution {
public:
    int fib(int n) {
        if(n<2) return n;
        int t0=0,t1=1;
        while(n>1){
            int t=t0+t1;
            t0=t1;
            t1=t;
            n--;
        }
        return t1;
    }
};