class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int v1 = nums[0];
        int v2 = nums[0];
        int maxi = nums[0];
        int mini = nums[0];

        for(int i=1;i<nums.size();i++){

            v1 = max(nums[i],v1+nums[i]);
            v2 = min(nums[i],v2+nums[i]);

            if(maxi<v1) maxi=v1;
            if(mini>v2) mini=v2;
        }

        int res = max(maxi,-1*mini);
        return res;
        
    }
};