// Last updated: 8/16/2026, 1:55:27 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int total = 0;
        for(int i=0;i<n;i++){
            total += nums[i];
        }
        return sum-total;
    }
};