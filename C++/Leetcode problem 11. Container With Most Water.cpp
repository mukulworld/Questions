class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,area =0;
        int w,h;
        while(i<j){
            w = j-i;
            h = min(height[i],height[j]);
            area = max(w*h, area);
            
            if(height[i]<height[j]) i++;
            else if(height[j]<height[i]) j--; 
             else j--,i++;
        }
        
       return area; 
    }
};


// https://leetcode.com/problems/container-with-most-water/
