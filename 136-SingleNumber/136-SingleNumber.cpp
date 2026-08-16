// Last updated: 8/16/2026, 1:55:48 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans = ans^nums[i] ;
        }
        return ans;
    }   
};