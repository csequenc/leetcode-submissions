// Last updated: 8/16/2026, 1:55:18 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> a;
        set<int> b;
        for(int i=0;i<n1;i++){
            a.insert(nums1[i]);
        }
        for(int j=0;j<n2;j++){
            b.insert(nums2[j]);
        }
        vector<int> ans;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(ans,ans.begin()));
        return ans;
    }
};