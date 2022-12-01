class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length()/2;
        int arr[4] = {0};
        unordered_map<char,int>mapp;
        mapp['a']++;
        mapp['e']++;
        mapp['i']++;
        mapp['o']++;
        mapp['u']++;
        mapp['A']++;
        mapp['E']++;
        mapp['I']++;
        mapp['O']++;
        mapp['U']++;
        
        for(int i=0;i<s.length();i++){
            if (mapp[s[i]]){
                if(i <n ) arr[0] +=1;
                else arr[2]+=1;
            }
            else {
                if(i<n) arr[1] +=1;
                else arr[3]+=1;
            }            
        }
   
        return(arr[0] == arr[2] && arr[1] == arr[3]);
        
    }
};
