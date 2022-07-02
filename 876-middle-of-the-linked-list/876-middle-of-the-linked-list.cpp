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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp;
        
        temp=head;
        int count=0;
        while(temp!=0){
            temp=temp->next;
            count++;
        }
        // cout<<"count is"<<count;
       count= (count/2)+1;
        temp=head;
        while(count>1){
            temp=temp->next;
            count--;
        }
        
        return temp;
        
    }
};