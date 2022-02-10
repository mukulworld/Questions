class Solution {
public:
    int fib(int n) {
        int sum=0,prev=0,helper=1;
        for(int i=0;i<n;i++){
            prev=helper;
            helper=sum;
            
            sum+=prev;
            
        }
        return sum;
    }
};
