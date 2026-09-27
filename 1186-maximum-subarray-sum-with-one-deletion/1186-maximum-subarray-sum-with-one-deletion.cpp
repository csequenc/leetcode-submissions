class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int nodel = arr[0];
        int onedel = INT_MIN;
        int ans = arr[0];

        for(int i = 1; i < arr.size(); i++) {

            int prevonedel = onedel;
            int prevnodel = nodel;

            nodel = max(prevnodel + arr[i], arr[i]);

            if(prevonedel == INT_MIN)
                onedel = prevnodel;
            else
                onedel = max(prevonedel + arr[i], prevnodel);

            ans = max(ans, max(nodel, onedel));
        }

        return ans;
    }
};