class Solution {
public:
    bool check(int a[],int b[]){
        int f=1;
            for(int i=0;i<26;i++){
                if(a[i]!=b[i]){
                    f--;
                    break;
                }
            }
            return f==1;
    }
    bool checkInclusion(string s1, string s2) {
        int a[26]={0},b[26]={0}, n1=s1.size(),n2=s2.size();
        if(n1>n2) return false;
        for(int i=0;i<n1;i++){
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        if(check(a,b)) return true;
        for(int i=n1,j=0;i<n2;i++,j++){
            b[s2[j]-'a']--;
            b[s2[i]-'a']++;
            if(check(a,b)) return true;
        }
        return false;
    }
};