// 237. Delete Node in a Linked List
// https://leetcode.com/problems/delete-node-in-a-linked-list/description/
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
    void deleteNode(ListNode* node) {
        if(node->next == NULL){
            node = NULL;
            return;
        }

        ListNode* todelete = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        
        delete todelete;
    }
};
