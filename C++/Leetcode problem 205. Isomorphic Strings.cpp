class Solution {
public:
    string encoder(string list){
        
        unordered_map<char,char>mapp;
      
        char curr='a';
        
        for(auto x: list) if(!mapp[x]) mapp[x]=curr++;
      
      // adding all the unique elements in the mapp to store them  
      
        for(int i=0;i< list.size();i++) list[i] = mapp[list[i]]; 
      // now we change the first unique letter with 'a' and second with 'b'  upto so on whereever they appear.  
        return list;
    }
        
    
    bool isIsomorphic(string s, string t) {
        return encoder(s)==encoder(t);
    }     
};
