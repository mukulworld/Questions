class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long s=n;
        if(n<0) s = -s;
        
        while(s>0){
            if(s%2==1)ans = ans*x,s-=1;
            else x = x*x,s/=2;
        }
        if(n<0) return 1.0/ans;
        return ans;
    }
};
