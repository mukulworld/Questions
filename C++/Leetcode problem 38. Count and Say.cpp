class Solution {
public:
        
       string countAndSay(int n) { 
           if(n ==1) return "1";
    
         string str = countAndSay(n-1);
         string result = "";
         int j,count;
         for(int i=0;i<str.length();i++){
           count=1;
             while(i<str.length() && str[i]==str[i+1]){ 
                 i++;
                 count+=1;
             }
                 result += to_string(count) + str[i];
            }
        
       return result;
    }
};


// https://leetcode.com/problems/count-and-say/
