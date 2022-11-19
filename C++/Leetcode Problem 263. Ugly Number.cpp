class Solution {
public:
    bool isUgly(int n) {
        
        if(n<1) return false;
        if(n==1) return true;
        for(int i=2;i<INT_MAX;i++){
            if(n%2 == 0) n/=2;
            else break;
        }
        for(int i=2;i<INT_MAX;i++){
            if(n%3 == 0) n/=3;
             else  break;
        }
        for(int i=2;i<INT_MAX;i++){
            if(n%5 == 0) n/=5;
             else   break;        
               }     
               
        return n==1;
    }
};
