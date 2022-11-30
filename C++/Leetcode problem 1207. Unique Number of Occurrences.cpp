class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     if(arr.size() == 1) return true;
        
     unordered_map<int,int>mapp;
     unordered_map<int,int>mapp2;
        
    for(auto x: arr) mapp[x]++;
        
    for(auto x = mapp.begin(); x != mapp.end(); x++){
        if(mapp2[x->second]) return false;
        else mapp2[x->second]++;
    }
        
    return true;     
    }
};
