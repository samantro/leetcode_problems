class Solution {
    #include <string.h>
public:
    long long distinctNames(vector<string>& ideas) {
        std::array<std::unordered_set<std::string>, 26> begCharToSuffix;
        long long returnVal = 0;
        for (int i = 0; i < ideas.size(); i++){
            begCharToSuffix[ideas[i][0] - 'a'].emplace(ideas[i].substr(1));
        }
        for (int i = 0; i < 25; i++){
            for (int j = i + 1; j < 26; j++){
                long long mutualChars = 0;

                for (auto suffix : begCharToSuffix[j]){
                    if (begCharToSuffix[i].count(suffix)){
                    ++mutualChars;
                    }
                }
                returnVal += 2LL * (begCharToSuffix[i].size() - mutualChars) * (begCharToSuffix[j].size() - mutualChars);
            }
        }

        return returnVal;
    }
};