class Solution {
public:
    int reverse(long int x) {
      long int temp=0;  
        
        while(x){
            temp = temp*10 + x%10;
            x/=10;
        }
        
       if(temp<INT_MIN || temp>INT_MAX) return 0;
        return temp;
        
    }
};
