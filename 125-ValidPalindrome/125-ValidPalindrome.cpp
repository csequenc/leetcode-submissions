// Last updated: 8/16/2026, 1:55:54 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = n-1;
        int i=0;
        char ch;
        char ch1;
        int flag = true;
        while(i<j){
            if(isalnum(s[i])) ch=s[i];
            else {i++; continue;}
            if(isalnum(s[j])) ch1=s[j];
            else {j--; continue;}
            if(tolower(ch)!=tolower(ch1)){
                flag = false;
                break;
            }
            else if(tolower(ch)==tolower(ch1)){
                i++;
                j--;
            }
        }
        return flag;
    }
};