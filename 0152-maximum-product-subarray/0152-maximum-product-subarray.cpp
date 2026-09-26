class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int mini = nums[0];
        int ans = nums[0];
        int maxi = nums[0];

        for(int i=1;i<nums.size();i++){

            int v1 = mini * nums[i];
            int v2 = nums[i];
            int v3 = maxi * nums[i];
            
            maxi = max(v1,max(v2,v3));
            mini = min(v1,min(v2,v3));

            ans = max(ans,max(max(v2,v3),v1));

        }

        return ans;
    }
};