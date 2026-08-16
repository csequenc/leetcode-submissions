// Last updated: 8/16/2026, 1:55:38 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int n1=t.length();
        string s1=s;
        string t1=t;
        if(n!=n1) return false;
        unordered_map<char,char> mp;
        unordered_map<char,char> mp1;
        for(int i=0;i<n;i++){
            mp[s[i]]=t[i];
            mp1[t[i]]=s[i];
        }
        for(int j=0;j<n;j++){
            t[j]=mp1[t[j]];
            s[j]=mp[s[j]];
        }
        if(t==s1 && s==t1) return true;
        else return false;


    }
};