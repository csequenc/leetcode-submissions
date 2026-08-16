// Last updated: 8/16/2026, 1:55:07 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int j=0;
        char temp;
        int temp1;
        for(int i=0;i<n;i++){
            if(s[i]==' ' || i==(n-1)){
                temp1=i-1;
                if(i==(n-1)) temp1=i;
                while(j<temp1){
                    temp=s[j];
                    s[j]=s[temp1];
                    s[temp1]=temp;
                    temp1--;
                    j++;
                }
                j=i+1;
            }
        }
        return s;
    }
};