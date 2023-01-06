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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *t=head;
        int count=0;
        while(t!=NULL){
            count++;
            t=t->next;
        }

        // int n=size(head);
        int step=count/2;
        ListNode *t2=head;
        while(step--){
            t2=t2->next;

        }
        return t2;
    }
};
