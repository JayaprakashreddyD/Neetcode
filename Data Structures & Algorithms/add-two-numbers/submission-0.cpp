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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* ans=NULL;
        ListNode* t=NULL;
        int carry=0,sum=0;
        while(t1 || t2){
            sum=carry;
            if (t1){
                sum+=t1->val;
                t1=t1->next;
            }
            if (t2){
                sum+=t2->val;
                t2=t2->next;
            }
            if (sum>9){
                carry=sum/10;
                sum%=10;
            }
            else{
                carry=0;
            }
            ListNode* n=new ListNode(sum);
            if (ans==NULL){
                ans=n;
                t=n;
            }
            else{
                t->next=n;
                t=n;
            }
        }
        if (carry!=0) t->next=new ListNode(carry);
        return ans;
    }
};
