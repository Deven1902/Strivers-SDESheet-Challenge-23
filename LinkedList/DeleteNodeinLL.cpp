// Delete Node in a Linked List

// leetcode. 

// problem link:- https://leetcode.com/problems/delete-node-in-a-linked-list/description/ 

class Solution {
public:
    void deleteNode(ListNode* node) {

        // Copy the next node value first
        // delete the next node after that. 
        
        node -> val = node-> next -> val;
        node-> next = node-> next -> next;
   }
};
