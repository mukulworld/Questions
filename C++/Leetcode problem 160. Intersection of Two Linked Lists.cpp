// Almost Brute force O(n) time as O(n) space
 
class Solution {
public:
    unordered_map<ListNode*,int>mapp;
    ListNode* result = NULL;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        
        while(a){
            mapp[a]++;
            a=a->next;
        }
        while(headB){
            if(mapp[headB]){
                result = headB;
            break;
            }
            else headB=headB->next;
        }
        
        return result;
    }
};


// Optimised Solution O(n) time and O(1) space

class Solution {
public:

    ListNode* result = NULL;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA, *b = headB;
        int counta=1,countb=1;
        
        while(a->next) counta+=1,a=a->next;
        while(b->next) countb+=1,b=b->next;

         if(a!=b) return NULL;
        
        int counta1 = max(0,counta-countb);
        countb = max(0,countb-counta);
        
       
        
        while(counta1>0)headA=headA->next, counta1--;
        while(countb>0)headB=headB->next, countb--;
        
        while(headA != headB){
              headA = headA->next;
              headB = headB->next;
          }  
        
        return headA;
    }
};
