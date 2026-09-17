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
    bool hasCycle(ListNode* head) {
        ListNode *slow, *fast;
        slow = head;
        fast = head;
        if(head == nullptr || head->next == nullptr) return false;
        
        while(fast != nullptr){
            if(fast -> next == nullptr) break;
            fast = fast->next->next;
            slow = slow->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};
