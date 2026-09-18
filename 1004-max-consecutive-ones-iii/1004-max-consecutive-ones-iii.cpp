class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {

        int low = 0;
        int size = 0;
        int zero = 0;

        for(int high = 0; high < arr.size(); high++) {

            if(arr[high] == 0)
                zero++;

            while(zero > k) {

                if(arr[low] == 0)
                    zero--;

                low++;
            }

            size = max(size, high - low + 1);
        }

        return size;
    }
};