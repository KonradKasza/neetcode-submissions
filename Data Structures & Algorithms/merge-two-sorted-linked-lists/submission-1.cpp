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
    bool isSmaller(int left, int right){
        if(left > right) return false;
        else return true;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newHead;
        ListNode* current;
        if(list1 == nullptr || list2 == nullptr ){
            if(list1 != nullptr){
                newHead = list1;
                list1 = list1->next;
            } else if (list2 != nullptr){
                newHead = list2;
                list2 = list2->next;
            } else {
                return newHead = nullptr;
            }
        } 
        else if(isSmaller(list1->val,list2->val)){
            newHead = list1;
            list1 = list1->next;
        } else {
            newHead = list2;
            list2 = list2->next;
        }
        current = newHead;
        while(list1 != nullptr || list2 != nullptr){
            if(list1 == nullptr){
                current -> next = list2;
                current = current -> next;
                list2 = list2->next;
            } else if(list2 == nullptr){
                current -> next = list1;
                current = current -> next;
                list1 = list1->next;
            } else {
                if(isSmaller(list1->val, list2->val)){
                    current -> next = list1;
                    current = current -> next;
                    list1 = list1->next;
                } else {
                    current -> next = list2;
                    current = current -> next;
                    list2 = list2->next;
                }
            }
        }
        return newHead;
    }
};
