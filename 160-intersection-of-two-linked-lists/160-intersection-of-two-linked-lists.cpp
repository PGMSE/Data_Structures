class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp,*temp2;
        unordered_set<ListNode *> s;
        temp=headA;
        while(temp!=0){
            s.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        temp2=0;
         while(temp!=0){
           auto it=s.find(temp);
             if(it!=s.end()) {
                 temp2=temp;break;
             }
           temp=temp->next;
        }
        
        return temp2;
        
        
    }
};