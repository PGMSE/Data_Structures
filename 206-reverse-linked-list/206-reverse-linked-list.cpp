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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *cur,*prev,*fwd;
        cur=head;
        prev=0;
        // next=cur->next;
        while(cur!=0){
            fwd=cur->next;
            cur->next=prev;
            prev=cur;
            cur=fwd;
        }
        
        return prev;
        
        
        
    }
};