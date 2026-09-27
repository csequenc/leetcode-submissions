class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int nodel = arr[0];
        int onedel = NULL;
        int ans = arr[0];

        for(int i=1;i<arr.size();i++){

            int prevonedel = onedel;
            int prevnodel = nodel;


            nodel = max(nodel+arr[i],arr[i]);

            onedel = max(onedel+arr[i],prevnodel);

            ans = max(ans,max(nodel,onedel));


        }

        return ans;
        
    }
};