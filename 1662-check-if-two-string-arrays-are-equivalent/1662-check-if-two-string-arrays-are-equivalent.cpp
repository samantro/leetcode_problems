class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1="", s2 ="";
        for(int i=1;i<w1.size();i++) w1[0]+=w1[i];
        for(int i=1;i<w2.size();i++) w2[0]+=w2[i];
        return w1[0]==w2[0];
    }
};