// Last updated: 8/16/2026, 1:55:42 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int value = 1;
        for(int i=1;i<nums.size();i++){
            
            if(value == 0) candidate = nums[i];
            
            if(nums[i]==candidate) value++;
            else value--;

        }

        return candidate;
    }
};