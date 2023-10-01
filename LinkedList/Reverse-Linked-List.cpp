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
    // ListNode* reverseList(ListNode* head) {

    //     ListNode* temp = head;
    //     ListNode* prev = NULL;

    //     while(temp) {
    //         cout<<temp->val;
    //         ListNode* nex = temp->next;
    //         temp->next=prev;
    //         prev=temp;
    //         temp=nex;
    //     }
    //     return prev;
    // }

    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        ListNode* reverse = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return reverse;
    }
};
