class Solution {
public:
    bool isok(int n, string s){
            if(s[n] != s[n+1] && s[n+1] != s[n+2] && s[n] != s[n+2]) return true;
            return false;
    }
    int countGoodSubstrings(string s) {
        if(s.length()<3) return 0;
        int count=0;
        
            for(int i=0;i<s.length()-2;i++){
                if(isok(i,s)) count++;
            }
            return count;
    }
};
