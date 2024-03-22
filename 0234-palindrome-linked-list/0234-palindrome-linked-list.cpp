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
    bool isPalindrome(ListNode* head) {
        // vector<int> ans;
        // ListNode* temp = head;
        // while(temp){
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }
        // for(int i=0; i<ans.size()/2; i++){
        //     if(ans[i]!=ans[ans.size()-1-i])
        //         return false;
        // }
        // return true;
        ListNode *slow = head, *fast = head, *prev = NULL, *tmp;
        while(fast && fast -> next) // finding mid point
            fast = fast -> next -> next,
            tmp = slow -> next, slow -> next = prev, prev = slow, slow = tmp;        
        slow = (fast ? slow -> next : slow); // for odd length case as mentioned above
        while(slow) // check if linked lists starting at prev and slow are equal
            if(slow -> val != prev -> val) return false;
            else slow = slow -> next, prev = prev -> next;
        return true;
    }
};