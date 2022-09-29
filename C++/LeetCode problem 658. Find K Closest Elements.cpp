class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int slow = 0, fast = size(arr)-1;
        
        while(fast - slow >= k)
            if(x - arr[slow] <= arr[fast]- x) fast--;
              else slow++;
        return vector<int>(begin(arr) +slow, begin(arr)+ fast+1 ); 
      
        
    }
};


// https://leetcode.com/problems/find-k-closest-elements/
