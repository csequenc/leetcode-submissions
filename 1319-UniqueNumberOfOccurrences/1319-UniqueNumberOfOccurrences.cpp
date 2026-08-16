// Last updated: 8/16/2026, 1:54:50 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        set<int> c;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for (auto a:mp){
            c.insert(a.second);
        }
        if(c.size()==mp.size()) return true;
        else return false;

    }
};