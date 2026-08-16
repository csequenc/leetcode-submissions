// Last updated: 8/16/2026, 1:56:18 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int j;
        int k;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]>0) k--;
                else if(nums[i]+nums[j]+nums[k]<0) j++;
                else if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    ans1.push_back(ans);
                    j++;
                    k--;
                    while(nums[j]==nums[j-1]&& j<k){j++;}
                    while(nums[k]==nums[k+1] && j<k){k--;}
                }
            }


        }
        return ans1;
    }
};