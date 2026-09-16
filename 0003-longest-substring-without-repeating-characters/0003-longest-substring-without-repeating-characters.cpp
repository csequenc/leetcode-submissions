class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int low = 0;
        int high = 0;
        int n = s.size();
        int size = 0;
        unordered_map<char,int> mp;

        for(high = 0; high<n; high++){
            mp[s[high]]++;

            while(mp.size() < (high-low+1) ){
                mp[s[low]]--;
                if(mp[s[low]] == 0) mp.erase(s[low]);
                low++;
            }

            size = max(size,high-low+1);
        }

        return size;

        
    }
};