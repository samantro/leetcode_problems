class Solution {
public:
    int pivotInteger(int n) {
        int p=(n)*(n+1)/2;
        for(int i=1;i<=n;i++){
            int k=i*(i+1)/2;
            if(k==(p-k+i)) return i;
            else if(k>(p-k+i)) break;
        }
        return -1;
    }
};