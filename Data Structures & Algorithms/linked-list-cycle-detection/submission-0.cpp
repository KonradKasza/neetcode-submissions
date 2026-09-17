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
        bool firstIter = true;
        while(fast != nullptr){
            firstIter = false;
            if(fast -> next == nullptr) break;
            fast = fast->next->next;
            slow = slow->next;

            if(slow == fast && firstIter == false){
                return true;
            }
        }
        return false;
    }
};
