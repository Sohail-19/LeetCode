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
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int len1 = 0, len2 = 0;
        while(tempA){
            len1++;
            tempA = tempA->next;
        }
        while(tempB){
            len2++;
            tempB = tempB->next;
        }
        int diff = len1 - len2;
        if(diff < 0){
            while(diff++ != 0) headB = headB->next;
        }
        else{
            while(diff-- != 0) headA = headA->next;
        }
        while(headA){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};