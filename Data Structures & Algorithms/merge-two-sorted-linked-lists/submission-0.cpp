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
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* ans=NULL;
        ListNode* t=NULL;
        while(t1 || t2){
            ListNode* n=NULL;
            if (t1 && t2){
                if (t1->val<=t2->val){
                    n=new ListNode(t1->val);
                    t1=t1->next;
                }
                else{
                    n=new ListNode(t2->val);
                    t2=t2->next;
                }
            }
            else if (t1){
                n=new ListNode(t1->val);
                t1=t1->next;
            }
            else{
                n=new ListNode(t2->val);
                t2=t2->next;
            }
            if (ans==NULL){
                ans=n;
                t=n;
            }
            else{
                t->next=n;
                t=n;
            }
        }
        return ans;
    }
};
