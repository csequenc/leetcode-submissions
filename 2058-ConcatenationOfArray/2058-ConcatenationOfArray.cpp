// Last updated: 8/16/2026, 1:54:37 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n*2,0);

        for(int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[n+i] = nums[i];
        }
        
        return ans;


        
    }
};