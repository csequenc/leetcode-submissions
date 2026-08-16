// Last updated: 8/16/2026, 2:32:32 PM
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        map<int,int> mp;
        int n = arr.size();
        int j=0;
        mp[arr[0]]++;
        for(int i=1;i<n;i++){
            if(mp[arr[i]] > 1) continue;
            else{
                j++;
                arr[j] = arr[i];
                mp[arr[i]] ++;
            }
        }

        return j+1;
        
    }
};