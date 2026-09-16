class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int low = 0;
        int high = 0;
        unordered_map<int,int> mp;
        int n = fruits.size();
        int size = 0;

        for(high = 0; high < n; high++){
            
            mp[fruits[high]]++;

            while(mp.size() > 2){
                
                mp[fruits[low]]--;
                if(mp[fruits[low]] == 0) mp.erase(fruits[low]);
                low++;
            }

            if(mp.size() <= 2){

                int sum = 0;
                for(auto it:mp){
                    sum += it.second;
                }

                size = max(size,sum);
            }
        }

        return size;
        
    }
};