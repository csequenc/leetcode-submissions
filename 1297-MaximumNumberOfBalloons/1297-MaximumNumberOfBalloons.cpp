// Last updated: 8/16/2026, 1:54:51 PM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mp;

        for(int i=0;i<text.length();i++){
            mp[text[i]]++;
        }

        int ans=0;
        string str="balloon";
        
        for(int j=0;j<str.length();j++){
            char ch1 = str[j];
            if(mp[ch1]==0){
                break;
            }
            if (ch1 == 'n' && mp['n']){
                ans++;
                j=-1;
            }
            mp[ch1]--;
        }
        return ans;
    }
};