class Solution {
public:
    bool checkIfPangram(string sentence) {        
        unordered_map<char,int>mapp;  // Create a map        
        for(int i=0;i<sentence.length();i++){  // put every letter of strign into map
            if(mapp.size()== 26) break;
            mapp[sentence[i]]++;                          
        }
                
        if(mapp.size()==26) return true;   // check if th emap have 26 entries or not
        return false; 
       
        
    }
};

// https://leetcode.com/problems/check-if-the-sentence-is-pangram/
