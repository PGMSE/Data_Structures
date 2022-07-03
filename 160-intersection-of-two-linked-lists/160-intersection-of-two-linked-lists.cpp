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
        ListNode *temp,*temp2;
        set<ListNode *> s;
        temp=headA;
        while(headA!=0){
            s.insert(headA);
            headA=headA->next;
        }
        // temp=headB;
        temp2=0;
         while(headB!=0){
           auto it=s.find(headB);
             if(it!=s.end()) {
                 temp2=headB;break;
             }
           headB=headB->next;
        }
        
        return temp2;
        
        
    }
};