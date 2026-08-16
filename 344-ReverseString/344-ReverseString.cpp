// Last updated: 8/16/2026, 1:55:20 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch;
        int n=s.size();
        int i = 0;
        int j=n-1;
        while(i<j){
            ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++;
            j--;
        }
    }
};