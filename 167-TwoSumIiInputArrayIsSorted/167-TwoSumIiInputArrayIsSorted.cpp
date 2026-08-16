// Last updated: 8/16/2026, 1:55:45 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i =0;
        int n = nums.size();
        int j = n-1;
        while(i<j){
            if(nums[i]+nums[j] > target) j--;
            else if(nums[i]+nums[j] < target) i++;
            else{
                break;
            }
        }
        return {i+1,j+1};
        
    }
};