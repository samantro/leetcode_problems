class Solution {
public:
    unordered_set<string> sets;
    
    bool search(string& a, int idx) {
        int n = a.size();
        if (idx == n) {
            return true;
        }
        for (int i = idx; i < n; ++i) {
            if (sets.count(a.substr(idx, i - idx + 1))) {
                if (search(a, i + 1)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        sort(words.begin(), words.end(), [&](string& a, string& b) {
            int sa = a.size(), sb = b.size();
            if (sa == sb) {
                return a < b;
            }
            return sa < sb;
        });
        vector<string> ans;
        for (auto& s : words) {
            if (search(s, 0)) {
                ans.push_back(s);
            }
            sets.insert(s);
        }
        return ans;
    }
};