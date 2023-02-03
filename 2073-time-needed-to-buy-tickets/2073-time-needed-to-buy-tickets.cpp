class Solution {
public:
    int timeRequiredToBuy(vector<int>& A, int k) {
        int step = 0,n=A.size();
            for (int i = 0; (i+n)%n < n; ++i) {
                i=(i+n)%n;
                if (A[i] == 0) continue;
                A[i]--;
                ++step;
                if (A[k] == 0) return step;
            }
        return 0;
    }
};