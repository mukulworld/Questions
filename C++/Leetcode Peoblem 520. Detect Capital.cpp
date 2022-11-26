class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() ==1 ) return true;
        
        if(isupper(word[0])){  
            
        if(isupper(word[1])){  
        for(int i=2; i<word.length();i++){
            if(! isupper(word[i])) return false;
          }
        }  
          if(islower(word[1])) { 
          for(int i=1;i<word.length();i++){
               if( !islower(word[i])) return false;
          }
          }     
        }
        
        if(islower(word[0])) for(auto x: word) if(!islower(x)) return false;
        
        
        
     return true;   
    }
};
