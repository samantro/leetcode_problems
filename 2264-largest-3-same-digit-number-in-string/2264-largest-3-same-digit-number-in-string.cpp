class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string temp = "";
                int k=1;
                while(k++<4) temp+=num[i];
                if(temp>res){
                    res = temp;
                }
            }
        }
        return res;
    }
};