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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* iter = head;
//         int len = 0;
//         int i=1;
        
//         while(iter){
//             iter = iter->next;
//             len++;
//         }
        
//         if(len==n)  return head->next;
        
//         for(iter = head; i<len - n; i++){
//             iter = iter->next;
//         }
//         iter->next = iter->next->next;
        
//         return head;
//     }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        while(n--) fast = fast -> next;      // iterate first n nodes using fast
        if(!fast) return head -> next;       // if fast is already null, it means we have to delete head itself. So, just return next of head
        while(fast -> next)                  // iterate till fast reaches the last node of list
            fast = fast -> next, slow = slow -> next;            
        slow -> next = slow -> next -> next; // remove the nth node from last
        return head;
    }
};