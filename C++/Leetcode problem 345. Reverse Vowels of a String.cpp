class Solution {
public:
    string reverseVowels(string s) {
        stack<char>temp;
        
        
        
        for(auto x: s) if( x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U' ||x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u' ) temp.push(x);
       
                          
        string ans;
        char x;
        for(int i=0;i<s.length();i++){
            x = s[i];
            if(x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U' ||x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u'){
               s[i] = temp.top();
               temp.pop();
               }
        }
      return s;                    
    }
};


// https://leetcode.com/problems/reverse-vowels-of-a-string/
