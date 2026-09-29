class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int best = nums[0];
        int worst = nums[0];
        int maxi = nums[0];
        int mini = nums[0];
        int suma = nums[0];

        for(int i=1;i<nums.size();i++){

            best = max(nums[i],best+nums[i]);
            if(maxi < best) maxi = best;

            worst = min(nums[i],worst+nums[i]);
            if(mini > worst) mini = worst;

            suma += nums[i];

        }

        if(suma < 0 && mini < 0 && maxi < 0) return maxi;

        return(max(maxi,(suma-mini)));
    }
};