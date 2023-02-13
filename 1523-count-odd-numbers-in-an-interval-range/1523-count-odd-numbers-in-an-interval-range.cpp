class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high>>1) - (low>>1);
        if(high&1) return ans+1;
        return ans;
    }
};