// Last updated: 8/16/2026, 1:54:40 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        set<char> allow;
        for(char ch:allowed){
            allow.insert(ch);
        }
        int n1=words.size();
        for (int i=0;i<n1;i++){
            set<char> a;
            string wor = words[i];
            int n = wor.length();
            for(int i=0;i<n;i++){
                a.insert(wor[i]);
            }
            set<int> c;
            set_difference(a.begin(),a.end(),allow.begin(),allow.end(),inserter(c,c.begin()));
            if(c.size()==0) count++;
        }
        return count;
    }
};