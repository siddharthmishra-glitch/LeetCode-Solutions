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
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        // fast ko n steps aage le jao
        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // Agar first node hi delete karna hai
        if(fast == NULL) {
            return head->next;
        }
        
        // Dono ko saath move karo
        while(fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // slow ke next node ko delete karo
        ListNode* deleteNode = slow->next;
        slow->next = slow->next->next;
        delete deleteNode;
        
        return head;
    }
};