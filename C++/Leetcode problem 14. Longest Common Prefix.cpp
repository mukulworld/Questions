class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();
       if(n==0) return "";
         string prefx;
        // sorting the vector and then comparing letters of the first and last
        // string of vector to see how many startinf leters are common in them
        
            sort(strs.begin(),strs.end());   
            string start=strs[0];
            string end=strs[n-1];
            
            for(int i=0;i<start.size();i++){
                if(start[i]==end[i])
                    prefx+=start[i];
                else break;
            }
           
       
        
         return prefx;
    }
};
