// https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// 2095. Delete the Middle Node of a Linked List

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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy;

        while(fast->next!=NULL and fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;        
    }
};
