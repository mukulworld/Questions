class Solution {
public:
     
   ListNode* swapPairs(ListNode* head) { 
       if(!head || !head->next) return head;
       
           ListNode*slow= head;
           ListNode*fast=slow->next;
           ListNode*nextt = fast->next ;
           
           fast->next=slow;
           slow->next= swapPairs(nextt);   
      
       return fast;
    }
};
// https://leetcode.com/problems/swap-nodes-in-pairs/
