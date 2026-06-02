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

        if(head == nullptr) return head;

        ListNode * curr= head; // 0, 
        ListNode * prev= nullptr; // 0, 1 

        while(curr != nullptr){
            
            ListNode * temp = curr->next; // 1
            curr->next = prev; // 0
            prev =curr;  // 0
            curr = temp; 
        }
        
        return prev;
    }
};
