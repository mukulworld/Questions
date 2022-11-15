/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *temp,*root = list2,*end;
        
        // finding the last node of the linkedlist 
        while(root){
            if(!root->next) end = root;
            root=root->next;
        }
        
        int i=1;
        root = list1;
        
        // now connecting the ath node of the list one with the list 2 head;
        while(i<=a){
            if(i == a){
             temp = root->next;   
             root->next = list2;
                break;
           }
            root= root->next;
            i++;
        }
        
        while(i<=b){
            if(i ==b ){
                end->next = temp->next;
                break;
            }
            i++,temp=temp->next;
            
        }
        
       return list1; 
    }
};
