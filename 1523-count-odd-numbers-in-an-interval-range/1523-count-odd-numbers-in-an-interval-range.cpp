class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high>>1) - (low>>1);
        return high&1?++ans:ans;
    }
};