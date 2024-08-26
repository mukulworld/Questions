class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long s=n;
        if(n<0) s = -1*n;

        for(long i=0;i<s;i++){
            ans = ans*x;
        }
    
    if(n>0) return ans;
    return 1/ans;

    }
};
