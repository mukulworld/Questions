class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int sum=0, m=0,p=0,g=0,all=0;
        
        for(int i =0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
               if(garbage[i][j] == 'M') m = i;
               if(garbage[i][j] == 'G') g = i;
               if(garbage[i][j] == 'P') p = i;
                all++;
            }
        }
        
        sum += all;
         
       for(int i=0;i<m;i++) sum += travel[i];
       for(int i=0;i<g;i++) sum += travel[i];
       for(int i=0;i<p;i++) sum += travel[i];
        
        
        
    return sum;    
    }
};

// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/
