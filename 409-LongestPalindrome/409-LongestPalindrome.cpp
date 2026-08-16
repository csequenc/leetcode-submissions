// Last updated: 8/16/2026, 1:55:14 PM
class Solution {
public:
    int longestPalindrome(string s) {
        int length=0;
        int n= s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto k:mp){
            length+=2*(k.second/2);
            if(length%2==0 && k.second%2!=0) length++;
        }
        return length;
    }
};