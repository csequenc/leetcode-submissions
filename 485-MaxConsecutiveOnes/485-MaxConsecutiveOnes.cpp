// Last updated: 8/16/2026, 1:55:11 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max =0,count=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) count ++;
            else{
                if(max<count) max = count;
                count = 0;
            }
        }
        if(max<count) max = count;
        return max;
    }
};