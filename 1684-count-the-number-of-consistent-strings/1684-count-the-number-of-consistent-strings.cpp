class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int check=0;
        for(int i=0;i<allowed.size();i++) check^=(1<<(allowed[i]-'a'));
        int res=0;
        for(int i=0;i<words.size();i++){
            int f=1;
            for(int j=0;j<words[i].size();j++){
                if(!((1<<(words[i][j]-'a'))&check)){
                    f=0;
                    break;
                }
            }
            if(f) res++;
        }
        return res;
    }
};