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
        ListNode * d=new ListNode;
        d->next=head;
        ListNode * a=d;
        ListNode * b=d;
        for(int i=1;i<=n;i++)
            a=a->next;
        while(a->next!=NULL)
        {
            b=b->next;
            a=a->next;
        }
        b->next=b->next->next;
        return d->next;
    }
};