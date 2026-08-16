// Last updated: 8/16/2026, 1:54:47 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max=0;
        int secmax=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=max) 
            {
                secmax = max;
                max = nums[i];
            }
            else if(nums[i]>secmax) secmax=nums[i];
        }
        return ((max-1)*(secmax-1));
    }
};