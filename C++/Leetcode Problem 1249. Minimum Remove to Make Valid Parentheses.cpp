class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int sum =0;
        char x;
        unordered_map<int,int>mapp;
        for(int i=0;i<s.length();i++){
            x = s[i];
            if(x =='(' ) sum +=1;
            if(x == ')') {
                if(sum <=0){
                    mapp[i]++;
                }
                else sum -=1;
            }
    }
    sum =0;
     for(int i=s.length()-1;i>=0;i--){
            x = s[i];
            if(x == ')') sum +=1;
            if(x =='(' ) {
                if(sum <=0) mapp[i]++;
                else sum -=1;
            }
    }
    string ans ="";
    for(int i=0;i<s.length();i++){
        if(!mapp[i]) ans+= s[i];
    }
    return ans;
    }
};
