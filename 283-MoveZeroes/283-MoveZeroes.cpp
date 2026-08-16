// Last updated: 8/16/2026, 1:55:24 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n>=1){
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
        }
        for(;j<n;j++){
            nums[j]=0;
        }
        }

    }
};