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

        ListNode* temp = head;
        int count = 0;
        int a = 1;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        if(count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;

        while(temp != NULL) {
            if(count - a == n) {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
                break;
            }
            else {
                temp = temp->next;
                a++;
            }
        }

        return head;
    }
};