class Solution {
public:
    int reverse(int x) {
       int sum =0; 
        // int b = abs(x);
     while(x){
        if(sum>INT_MAX/10 || sum<INT_MIN/10){
            return 0;}
         else{
            sum=sum*10+x%10;
            x=x/10;
         }
    }
        
        return sum;}           
        
    
};
