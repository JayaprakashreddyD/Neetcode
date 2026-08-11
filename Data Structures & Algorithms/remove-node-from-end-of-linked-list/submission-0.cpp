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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        n=count-n;
        if (n==0){
            head=head->next;
            return head;
        }
        temp=head;
        count=1;
        while(temp->next && temp){
            if (n==count){
                temp->next=temp->next->next;
            }
            else{
            temp=temp->next;
            }
            count++;
        }
        return head;
    }
};
