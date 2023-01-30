class Solution {
public:
    int tribonacci(int n) {
        int t1=1,t2=1,t0=0;
        if(n==0) return 0;
        if(n<3) return 1;
        while(n>2){
            int t=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=t;
            n--;
        }
        return t2;
    }
};