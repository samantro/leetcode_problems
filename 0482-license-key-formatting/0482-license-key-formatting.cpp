class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int i, size = s.size(), first, nDashes, nCyclesProc, nProc;
    string ans="";
    for (i = size-1, nProc=0; i >= 0; --i) {
        if (s[i] == '-') {
            continue;
        }
        if (nProc > 0 && nProc % k == 0) {
            ans.push_back('-');
        }
        ans.push_back(toupper(s[i]));
        ++nProc;
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};