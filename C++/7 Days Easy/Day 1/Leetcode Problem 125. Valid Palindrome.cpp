class Solution {
public:
    bool isok(string s){
        int n= s.length()-1;
        for(int i=0; i < s.length()/2;i++){
            if(s[i]!=s[n-i]) return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        for(int i =0;i<s.length();i++) s[i] = tolower(s[i]);
        string s2 ="";
        for(auto x: s) if(x>96 && x<123 || x> 47 && x<58) s2+= x;
        return isok(s2);



    }
};
