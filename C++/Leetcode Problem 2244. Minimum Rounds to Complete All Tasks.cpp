class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>temp;
        
        for(auto x: tasks) temp[x]++;
        
        for(auto i = temp.begin();i!=temp.end();i++){
            if(i->second == 1) return -1;
        }
        
        int count =0;
        
        for(auto i = temp.begin();i!=temp.end();i++) if(i->second%3 != 0) count++;
        
        for(auto i = temp.begin();i!=temp.end();i++) count += i->second/3;
        
        
       return count; 
    }
};
