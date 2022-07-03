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
    bool hasCycle(ListNode *head) {
        ListNode *temp;
        temp=head;
        map<ListNode *,bool> m;
        while(temp!=0){
            if(m[temp]!=true){
                m[temp]=true;
            }
            else return 1;
            temp=temp->next;
        }
        return 0;
    }
};