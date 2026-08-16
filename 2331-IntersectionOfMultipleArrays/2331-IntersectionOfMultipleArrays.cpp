// Last updated: 8/16/2026, 1:54:26 PM
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        int m = nums.size();

        set<int> a;
        set<int> c;

        for (int x : nums[0]) {
            a.insert(x);
        }

        for (int i = 1; i < m; i++) {

            c.clear();

            for (int k = 0; k < nums[i].size(); k++) {

                if (a.count(nums[i][k]) == 1) {
                    c.insert(nums[i][k]);
                }
            }

            a = c;
        }

        vector<int> ans;

        for (auto x : a) {
            ans.push_back(x);
        }

        return ans;
    }
};