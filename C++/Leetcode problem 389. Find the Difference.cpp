class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char character;
        for(int i=0;s[i]!='/0';i++){
            if(t[i]!=s[i]){
                character=t[i];
                break;
            }
        }
        return character;
    }
};


// Just for me to remind that i did in just 7 minutes.
