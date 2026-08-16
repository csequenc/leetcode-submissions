// Last updated: 8/16/2026, 1:55:28 PM
class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.length();
        int m = t.length();

        if(n != m){
            return false;
        }

        map<char,int> mp;

        for(int i=0;i<m;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto &it:mp){
            if(it.second != 0){
                return false;
            }
        }

        return true;

        
    }
};
