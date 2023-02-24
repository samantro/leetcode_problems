class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        v.push_back(first^encoded[0]);
        for(int i=1;i<encoded.size();i++){
            first=v[v.size()-1];
            v.push_back(first^encoded[i]);
        }
        return v;
    }
};