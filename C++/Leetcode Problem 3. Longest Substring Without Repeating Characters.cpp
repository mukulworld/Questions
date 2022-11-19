class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        if(s.length() == 1 ) return 1;
        int maxx=1,i=0,j; 

        
        for( i=0;i<s.length();i++){
           
            unordered_map<char,int>mapp;
            mapp[s[i]]++;
            
          for( j=i+1;j<s.length();j++){
            if(mapp[s[j]]){
                maxx = max(maxx,j-i);
                break;
                }
             else mapp[s[j]]++;
            
             }
           maxx = max(maxx,j-i); 
        }
        
        
      return maxx;  
    }
};
