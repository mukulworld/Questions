//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       
    vector<char>temp;
        
        for(int i=0;i<word1.size();i++){
            for(int j=0;j<word1[i].size();j++){
                temp.push_back(word1[i][j]);
            }
        }
        vector<char>temp2;
        for(int i=0;i<word2.size();i++){
            for(int j=0;j<word2[i].size();j++){
                temp2.push_back(word2[i][j]);
            }
        }
        if(temp2 == temp)return true;
         return false;
    }
};
