class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(!head->next) return NULL;
        if(!head->next->next ) head->next = NULL;
        
        ListNode* root = head;
        int count =0;
        
        while(root){
            count+=1;
            root=root->next;
        }
        
        root = head;
        count = count/2;
        int doo = 0;
         while(root->next){
            if(doo == count-1) root->next = root->next->next;
             root = root->next,doo += 1;
        }
        
        
       return head; 
    }
};

// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
