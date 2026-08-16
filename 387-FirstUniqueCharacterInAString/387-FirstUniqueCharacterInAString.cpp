// Last updated: 8/16/2026, 1:55:15 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        int n = s.length();
        int ch=-1;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int j=0;j<n;j++){
            if(mp[s[j]]<2){
                ch = j;
                break;
            }
        }
        return ch;
    }
};