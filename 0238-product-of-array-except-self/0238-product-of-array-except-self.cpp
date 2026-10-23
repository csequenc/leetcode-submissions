class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n,1);
        int pro = 1;

        for(int i=0;i<n;i++){
            ans[i] *= pro;
            pro *= nums[i];
        }

        int pr = 1;
        for(int j=n-1;j>=0;j--){

            ans[j] *= pr;
            pr *= nums[j];

        }
        return ans;

    }
};