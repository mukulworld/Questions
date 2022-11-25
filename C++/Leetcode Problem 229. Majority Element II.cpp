// Approach = Boyer-Moore Algorithm

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3,var1,var2,freq1=0,freq2=0;
        vector<int>ans;
        
        for(auto x: nums){
            if(x == var1) freq1++;
            else if( x == var2) freq2++;
            else if (!freq1) var1 = x, freq1++;
            else if( !freq2) var2 = x, freq2++;
            else freq1--,freq2--;
        }

        freq1=0;
        freq2=0;
        
        for(auto c: nums){
        if(c == var1) freq1++;
        if(c == var2) freq2++;
        }
        
        if(freq1 > n) ans.push_back(var1);
        if(freq2 > n) ans.push_back(var2);
        
       return ans;  
    }
};
