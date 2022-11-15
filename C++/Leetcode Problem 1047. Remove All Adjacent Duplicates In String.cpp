class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>temp;
        string ans ="";
        
        for(auto x: s){
            if(!temp.empty() && x == temp.top()) temp.pop();
            else temp.push(x);
        }
        while(!temp.empty()){
            ans = temp.top() + ans;
            temp.pop();
        }
        return ans;
        
    }
};
