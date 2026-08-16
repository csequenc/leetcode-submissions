// Last updated: 8/16/2026, 1:56:04 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0 , h = nums.size()-1 , m;
        while (nums[m]!=target && l<=h){
            if(nums[m]<target){
                l=m+1;
            }
            else
                h=m-1;
            m=(l+h)/2;
        }
         if(nums[m]==target)
            return m;
         else 
            return l;
    }
};