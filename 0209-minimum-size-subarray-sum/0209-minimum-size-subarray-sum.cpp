class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int ans = INT_MAX;
        int sum = 0;
        int n = nums.size();
        if(target == 0) return 0;
        while(j<n){
            sum += nums[j];
            while(sum >= target){
                ans = min(ans,j-i+1);
                sum -= nums[i];
                i++;
                if(ans == 1) return 1;
            }
            j++;
        }

        if(ans == INT_MAX) return 0;
        else return ans;
    }
};