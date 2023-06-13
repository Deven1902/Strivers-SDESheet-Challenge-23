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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ptr = list1;
        ListNode *ptr1 = list2;

        if(ptr == NULL) 
            return list2;

        if(ptr1 == NULL)
            return list1;

        if(ptr-> val < ptr1-> val) {
            ptr -> next =  mergeTwoLists(ptr->next, ptr1);
            return ptr;
        }

        else{
            ptr1->next = mergeTwoLists(ptr, ptr1 -> next);
            return ptr1;
        }
    }
};
