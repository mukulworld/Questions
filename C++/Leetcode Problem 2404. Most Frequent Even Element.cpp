class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int a=0,b=-1;
        unordered_map<int,int>temp;
        
        
        for(auto x: nums)if(x%2 == 0)temp[x]++;
        
        for(auto x: temp){
            if(x.second > a) b = x.first, a=x.second; 
            if(x.second == a ) b = min(b,x.first), a=x.second;
        }
        
        
        return b;
        
    }
};
