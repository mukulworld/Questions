class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1,i=0;
        while(i<s.size()/2){  s[i]=s[j-i]+s[i];
               s[j-i]=s[i]-s[j-i];
            s[i]=s[i]-s[j-i];
            i++;
        }
    }
};
