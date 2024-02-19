class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n==0 || n==INT_MIN ? false : !(n&(n-1));
    }
};