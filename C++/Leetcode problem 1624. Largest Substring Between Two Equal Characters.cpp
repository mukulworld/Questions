class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {

        
        vector<int>nums(26,0);
        int val=-1;
        
        for(int i=0; i<s.length();i++){
            if(nums[s[i] -'a']){
                val = max(val, i- nums[s[i]-'a']);
            }
            else nums[s[i]-'a'] = i+1;
        }       
        return val;
    }
};
