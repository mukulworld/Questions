class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        
        for(auto i:s)
        {
            if(i=='{' or i=='[' or i=='(')
                s1.push(i);
            
            else
            { if( s1.empty() or
               ( s1.top()=='{' and i!='}' )or
               ( s1.top()=='[' and i!=']' )or
               ( s1.top()=='(' and i!=')' ))
                   return false;
                 s1.pop();
        }
        }
        
        return s1.empty();
        
        
    }
};
