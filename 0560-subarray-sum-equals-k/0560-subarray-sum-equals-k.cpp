class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        mp[sum]++;
        int ques;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            ques = sum - k;
            if(mp[ques] != 0) ans += mp[ques];
            mp[sum]++;
        }

        return ans;
    }
};