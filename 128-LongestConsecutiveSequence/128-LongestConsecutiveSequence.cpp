// Last updated: 8/16/2026, 1:55:52 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map <int,int> mp;
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto k:mp){
            if (mp.find(k.first - 1) == mp.end()) {
                int count=1;
                int t=k.first+1;
                while(mp.find(t)!=mp.end()){
                    count++;
                    t++;
                }
                maxi = max(maxi,count);
            }
        }
        return maxi;
        
    }
};