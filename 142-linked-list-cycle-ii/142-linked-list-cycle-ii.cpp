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
    ListNode *detectCycle(ListNode *head) {
       ListNode * temp=head;
        unordered_map<ListNode *,bool> m;
        while(temp!=0){
            if(m[temp]!=true){
                m[temp]=true;
            }
            else{
                return temp;
            }
            temp=temp->next;
        }
        return 0;
    }
};