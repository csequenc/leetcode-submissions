// Last updated: 8/16/2026, 1:54:23 PM
class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m = requests.size();
        int i = 0;
        int total = 0;
        for(int x:requests){
            if(x-i >= 0){
                total += (x-i);
                i = x;
            }

            else{
                total += (i-x);
                i=x;
            }
        }

        return total;
    }
};