class Solution {
public:
    int maximum69Number (int num) {
        
        int i=0,ans = num,index=-1;
        
        
        while(ans){
            if(ans%10 == 6) index = i,i++,ans/=10;
            else ans /= 10,i++;
        }
        
        
       if(index == -1)  return num;
       return num  + 3*(pow(10,index)); 
        
     
    }
};

//   https://leetcode.com/problems/maximum-69-number/
