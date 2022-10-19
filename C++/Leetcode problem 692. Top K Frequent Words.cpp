class Solution {
public:
    
    // created a whole new comparator which returns true if  a>b according to rules given
    // and returns false if the a<b 
    
  static bool compare(pair<string,int>a, pair<string,int>b){
        if(a.second != b.second) return a.second > b.second;
        return a.first < b.first;
            
    }
    
   /* ALGO: We create a map to get frequency of every element
            Now we add those numbers to the new vector<pair<string,int>>
            now we sort the vector according to the new comparator ew just created    
    
    */
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mapp;
        for(auto c: words) mapp[c]++;
        
        vector<pair<string,int>>pairs;
        
        for(auto x = mapp.begin(); x!= mapp.end(); x++){
            pairs.push_back({x->first, x->second});
        }
      
        // now we sort the vector according to the new comparator ew just created  
        
      sort(pairs.begin(),pairs.end(),compare);
        
    // create avector and add the first K numbers to the new vector string
        
       vector<string>ans;
       for(int i=0;i<k;i++){
            ans.push_back(pairs[i].first);      
           }
            
        return ans;
    }
};





// https://leetcode.com/problems/top-k-frequent-words/submissions/
