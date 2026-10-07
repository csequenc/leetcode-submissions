class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        int ans=0;
        int sum = 0;
        mp[sum]++;
        int ques;

        for(int i=0;i<nums.size();i++){

            sum += nums[i];
            ques = sum % k;
            if(ques < 0) ques += k;
            if(mp[ques]) ans+= mp[ques];

            mp[ques]++;

        }

        return ans;
        
    }
};