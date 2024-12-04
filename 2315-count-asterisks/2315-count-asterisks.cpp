class Solution {
public:
    int countAsterisks(string s) {
        int b = 0, a = 0;
        for(int i = 0; i< s.size();i++){
            if(s[i]=='*' && b == 0){
                a++;
            }else if(s[i]=='|'){
                b++;
                if(b==2) b = 0;
            }
        }
        return a;
    }
};