class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        map<int, int, greater<int>> mp;
        
        for (int t : nums) {
            mp[t]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            
            if (k <= it->second) {
                return it->first;
            }
            
            k -= it->second;
        }

        return -1;
    }
};