class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1=str1.size(),s2=str2.size(),n=min(s1,s2);
        string res="",result="";
        for(int i=0;i<n;i++){
            res+=str1[i];
            string a=res,b=res;
            while(a.size()<s1) a+=res;
            if(a==str1){
                while(b.size()<s2) b+=res;
                if(b==str2) result=res;
            }
            
        }
        return result;
    }
};