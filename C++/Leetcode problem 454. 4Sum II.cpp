// This was the first problem that made me realize how poerful Unordered_map can be 
// Did this question first by O(n^4) time complexity then unordered_map decreased it 
// to O(n^2)


class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count =0;
        if(nums1.size()==0)
         count = 0;
            
else {
        int sum =0;
      unordered_map<int,int>mapp;
    
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                sum=nums1[i]+nums2[j];
               mapp[sum]++;
            }
        }

   for(int k=0;k<nums3.size();k++)
   {
       for(int l=0;l<nums4.size();l++)
       {
           sum=(-1)*(nums3[k]+nums4[l]);
           if(mapp[sum])
               count+= mapp[sum];
       }
   } 
        
}   
        return count;
        
    }
};
