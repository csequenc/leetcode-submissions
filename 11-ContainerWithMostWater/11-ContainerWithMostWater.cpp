// Last updated: 8/16/2026, 1:56:22 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area = 0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(min(height[i],height[j])*(j-i)>area) area = min(height[i],height[j])*(j-i);
            if(height[i]<height[j]) i++;
            else if(height[i]>height[j]) j--;
            else{
                i++;
                j--;
            }
        }
        return area;
    }
};