class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int distance = INT_MAX;
        int sum = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                if(abs(target - (nums[i]+nums[j]+nums[k])) < distance){
                    sum = nums[i]+nums[j]+nums[k];
                    distance = abs(target - sum);
                }
                
                if(nums[i]+nums[j]+nums[k] < target){
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k] > target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return sum;
    }
};