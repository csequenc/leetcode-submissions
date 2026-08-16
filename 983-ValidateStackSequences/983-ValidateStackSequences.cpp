// Last updated: 8/16/2026, 1:54:56 PM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int m = popped.size();
        int j=0;
        stack<int> s;
        for(int x:pushed){
            s.push(x);
            while(!s.empty() && j<m && s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        if(s.empty()) return true;
        else return false;
    }
};