class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int ones = 0;
        int zero = 0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        int diff;
        int ans = 0;

        for(int i=0;i<nums.size();i++){

            if(nums[i] == 0) zero++;
            else ones++;

            diff = zero-ones;

            if(mp.find(diff) == mp.end()){
                mp[diff] = i;
            }
            else{
                ans = max(ans,(i-mp[diff]));
            }
        }

        return ans;
    }
};