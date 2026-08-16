class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        int j = 0;
        int k = 1;

        for (int i = 1; i < n; i++) {

            // Same number and we have kept it only once
            if (arr[i] == arr[j] && k == 1) {
                j++;
                arr[j] = arr[i];
                k++;
            }

            // Same number and already kept twice
            else if (arr[i] == arr[j] && k == 2) {
                continue;
            }

            // New number
            else {
                j++;
                arr[j] = arr[i];
                k = 1;
            }
        }

        return j + 1;
    }
};