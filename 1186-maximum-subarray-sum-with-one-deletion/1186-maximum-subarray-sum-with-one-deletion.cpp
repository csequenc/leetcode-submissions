class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int nodel = arr[0];
        int onedel = INT_MIN;
        int ans = arr[0];

        for(int i=1;i<arr.size();i++){

            int prevonedel = onedel;
            int prevnodel = nodel;


            nodel = max(nodel+arr[i],arr[i]);

            int v;

            if(prevonedel == INT_MIN) v = arr[i];
            else v = prevonedel + arr[i];

            onedel = max(v,prevnodel); 

            ans = max(ans,max(nodel,onedel));


        }

        return ans;
        
    }
};