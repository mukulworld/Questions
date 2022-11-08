class Solution {
public:
    string makeGood(string s) {
        stack<char>temp;        
        
        for(int i=0;i<s.length();i++){
            if(!temp.empty() && abs(s[i] - temp.top()) == 32)
            temp.pop();
           else  temp.push(s[i]);                  
        }
        
        
        string ans= "";
        
        while(!temp.empty()){
            ans = temp.top() + ans;
            temp.pop();
                         
        }
        
        return ans;
    }
};

// https://leetcode.com/problems/make-the-string-great/
