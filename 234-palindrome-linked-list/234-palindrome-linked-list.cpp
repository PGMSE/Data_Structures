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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *temp=head;
        while(temp!=0){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int l=0,r=v.size()-1;
        while(l<=r){
            if(v[l]!=v[r]){
                return 0;
               
            }
             l++;
             r--;
            
        }
        return 1;
    }
};