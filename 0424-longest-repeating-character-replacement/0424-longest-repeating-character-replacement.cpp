class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> arr(26, 0);

        int low = 0;
        int size = 0;
        int maxFreq = 0;

        for(int high = 0; high < s.size(); high++) {

            arr[s[high] - 'A']++;

            maxFreq = max(maxFreq, arr[s[high] - 'A']);

            while((high - low + 1) - maxFreq > k) {

                arr[s[low] - 'A']--;
                low++;
            }

            size = max(size, high - low + 1);
        }

        return size;
    }
};