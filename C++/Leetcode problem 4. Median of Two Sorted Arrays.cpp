class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        int i=0,j=0, ans=0;
        vector<double>arr3;
        
        while(i<nums1.size() && j<nums2.size() && i+j < nums1.size()+nums2.size()-2){
            if(nums1[i]<=nums2[j]) arr3.push_back(nums1[i]),i++;
            if(nums1[i]>nums2[j]) arr3.push_back(nums2[j]),j++;
        }
        
        if(arr3.size()%2 != 0) return arr3[arr3.size()/2];
        return ((arr3[arr3.size()/2] + arr3[(arr3.size()/2) -1])/2);
    }
};


// https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/
