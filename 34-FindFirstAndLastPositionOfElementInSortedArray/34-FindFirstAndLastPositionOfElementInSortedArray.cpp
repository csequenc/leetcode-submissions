// Last updated: 8/16/2026, 1:56:07 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int i=0;
        int n=arr.size();
        int j = n-1;
        vector<int> ans;
        if(n<1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        while((arr[i]!=target || arr[j]!=target) && i<j){
            if(arr[i]!=target){
                i++;
            }
            if(arr[j]!=target){
                j--;
            }
        }
        if(arr[i]==target){
            ans.push_back(i);
        }
        if(arr[j]==target){
            ans.push_back(j);
        }
        if(arr[i]!=target){
            ans.push_back(-1);
        }
        if(arr[j]!=target){
            ans.push_back(-1);
        }
        return ans;
    }
};