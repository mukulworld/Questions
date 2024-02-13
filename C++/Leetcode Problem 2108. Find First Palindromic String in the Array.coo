class Solution {
public:
    bool ispal(string s){
        int n= s.length()-1;
            for(int i=0;i<s.length()/2;i++){
                if(s[i]!= s[n-i]) return false;
            }
            return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(auto x: words){
            if(ispal(x)) return x;
        }
        return "";
    }
};
