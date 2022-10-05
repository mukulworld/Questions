class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int count=0;
        for(int i=0;i<colors.length()-1;i++){
            if(colors[i]==colors[i+1]){
            count= count + min(neededTime[i],neededTime[i+1]);
            neededTime[i+1] = max(neededTime[i],neededTime[i+1]);
            }
        }
        return count;
    }
    
};

// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
