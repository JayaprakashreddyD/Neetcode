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
        if (head==NULL) return 0;
        ListNode* temp=head;
        unordered_map<ListNode*,int> mp;
        while(temp){
            if (mp[temp]) return true;
            mp[temp]++;
            temp=temp->next;
        }
        return 0;
    }
};
