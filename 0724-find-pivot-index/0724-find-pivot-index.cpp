class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        

        int presum = 0;
        int ssum = 0;
        
        for(int j=0;j<nums.size();j++){
            ssum += nums[j];
        }
        

        for(int i=0;i<nums.size();i++){
            
            if(i > 0) presum += nums[i-1];
            ssum -= nums[i];
            if(ssum == presum) return i;
        }

        return -1;

        

    }
};