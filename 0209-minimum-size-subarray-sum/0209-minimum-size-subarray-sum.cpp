class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int size = INT_MAX;
        int sum = 0;

        for(int j=0;j<n;j++){
            
            sum += nums[j];

            while(sum >= target){
                size = min(size,j-i+1);
                sum -= nums[i];
                i++;
            }

            if(size == 1) break;
        }

        if(size == INT_MAX) return 0;
        else return size;
    }
};