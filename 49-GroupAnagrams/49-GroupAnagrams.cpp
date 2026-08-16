// Last updated: 8/16/2026, 1:56:00 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        for (string word: strs){

            string m = word;
            sort(m.begin(),m.end());
            mp[m].push_back(word);
                
        }

        for(auto &it:mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
