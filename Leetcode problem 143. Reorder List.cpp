class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return;
        
        ListNode* fast=head,*root=head;
        int count = 0,i=0; 
        
        while(fast)fast=fast->next, count+=1;
        
        stack<ListNode*>doond;
        
       fast=head;
          
        while(fast) doond.push(fast),fast=fast->next;
                
        while(i<count/2){
            
            fast = doond.top();
            doond.pop();
            fast->next = root->next;
            root->next = fast;
            root = fast->next;
            i++;
        }
        root->next=NULL;
        
    }
};


// https://leetcode.com/problems/reorder-list/
