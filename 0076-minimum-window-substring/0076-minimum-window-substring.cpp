class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char ch : t)
            mp1[ch]++;

        int low = 0;
        int count = 0;

        int start = 0;
        int size = INT_MAX;

        for(int high = 0; high < s.size(); high++) {

            if(mp1[s[high]]) {
                mp2[s[high]]++;

                if(mp2[s[high]] <= mp1[s[high]])
                    count++;
            }

            while(count == t.size()) {

                if(high - low + 1 < size) {
                    size = high - low + 1;
                    start = low;
                }

                if(mp1[s[low]]) {

                    mp2[s[low]]--;

                    if(mp2[s[low]] < mp1[s[low]])
                        count--;
                }

                low++;
            }
        }

        if(size == INT_MAX)
            return "";

        return s.substr(start, size);
    }
};