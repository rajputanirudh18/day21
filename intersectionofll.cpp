/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        
        int lengthA=0;
        int lengthB=0;
        
        while(tempA!=NULL)
        {
            lengthA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL)
        {
            lengthB++;
            tempB=tempB->next;
        }
       int diff=0;
           if(lengthA<lengthB){
               diff=lengthB-lengthA;
               while(diff--){
                   headB=headB->next;
               }
           }else{
               diff=lengthA-lengthB;
               while(diff--){
               headA=headA->next;
               }
           }
        while(headA!=NULL and headB!=NULL)
        {
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
       return NULL;
    }
};