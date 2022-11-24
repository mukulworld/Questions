class Solution {
public:
    int longestPalindrome(string s) {
        int counteven=0,countodd=0,a=0;
         unordered_map<char,int>temp;
        
        for(int i=0; i<s.length();i++){
            temp[s[i]]++;
        }
    
        for(auto x: temp) if(x.second %2 == 0) counteven +=  x.second;     
        
        for(auto x: temp){ 
            if(x.second %2 != 0 ){
            countodd += x.second - 1;
            a+=1; 
          }
           }
        
        
       return (counteven + countodd + (a > 0));   
        
    }
};
