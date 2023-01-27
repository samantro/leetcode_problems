// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        while(i<n){
            int m=i+(n-i)/2;
            // cout<<m<<" ";
            if(isBadVersion(m)) n=m;
            else i=m+1;
        }
        return i;
    }
};