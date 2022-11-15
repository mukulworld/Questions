class Solution {
public:
    string reverseWords(string s) {
     int i =0;
     stack<string>temp;   
       
  
       for(int i=0;i<s.size();i++){
            string ans;
           if(s[i] == ' ' ) continue;
           while(i<s.size() && s[i] != ' ' ){
               ans += s[i];
                i++;
           }
           temp.push(ans);     
       }
        string give =temp.top();
        temp.pop();
        while(!temp.empty()){
            give = give + " " + temp.top();
            temp.pop();
        }
        
       return give;
    }
};

// https://leetcode.com/problems/reverse-words-in-a-string/
