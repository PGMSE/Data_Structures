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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode * temp;
        int count=0;
        temp=head;
        while(temp!=0){
            temp=temp->next;
            count++;
        }
        
        int i=1;
        temp=head;
         // cout<<"count is"<<count;
        count=count-n;
        int x=count;
        while(count>i){
            temp=temp->next;
            count--;
        }
          if(x==0){head=head->next;}
        else if(head->next==0 && n>=1){ head=0; }
        else if(temp->next!=0) temp->next=temp->next->next;
        
      
        
        
        
       
        
        return head;
    }
};