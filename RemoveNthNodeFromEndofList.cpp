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
        ListNode* prev=head,*curr=head;
        while(n--) curr=curr->next;
        if(!curr) return head->next;
        while(curr->next != NULL){
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};
