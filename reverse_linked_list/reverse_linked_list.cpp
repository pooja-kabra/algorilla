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
        if (head == nullptr){return head;}
        ListNode* temp = nullptr;
        ListNode* next_head = nullptr;
        ListNode* orig_head = head;
        ListNode* curr_head = head;
        
        while(orig_head->next != nullptr) {
            next_head = orig_head->next;
            temp = orig_head->next->next;
            orig_head->next->next = curr_head;
            orig_head->next = temp;
            curr_head = next_head;
    
        }
        return curr_head;
    }
};
