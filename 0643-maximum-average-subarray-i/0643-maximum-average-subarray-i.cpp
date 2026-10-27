class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        int ans = sum;

        int i = 0;
        for(int j=k;j<nums.size();j++){
            sum -= nums[i];
            i++;
            sum += nums[j];
            ans = max(ans,sum);

        }

        return (double)ans/k;
    }
};