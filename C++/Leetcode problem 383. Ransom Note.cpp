class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mapp;
        for(auto x: magazine) mapp[x]++;
        for(auto y: ransomNote) {
            if(mapp[y]) mapp[y]--;
            else if(!mapp[y]) return false;
        }
          return true;
    }
};


// https://leetcode.com/problems/ransom-note/submissions/
