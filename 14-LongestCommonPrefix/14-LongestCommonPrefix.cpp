// Last updated: 8/16/2026, 1:56:21 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = strs[0];
        string out = "";

        for (const string& word : strs) {
            for (int i=0; i<(min(word.length(),ans.length()));i++){
                if(word[i]==ans[i]){
                    out += ans[i];
                }
                else break;

            }
            ans = out;
            out = "";
            if(ans == "") break;
        }

        return ans;
    }
};