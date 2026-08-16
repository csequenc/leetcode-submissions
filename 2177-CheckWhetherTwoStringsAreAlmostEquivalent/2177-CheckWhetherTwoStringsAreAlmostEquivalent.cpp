// Last updated: 8/16/2026, 1:54:36 PM
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int> mp1;

        for(char ch : word1){
            mp1[ch]++;
        }

        for(char ch : word2){
            mp1[ch]--;
        }

        for(auto it : mp1){
            if(it.second > 3 || it.second < -3)
                return false;
            }
        return true;
    }
};