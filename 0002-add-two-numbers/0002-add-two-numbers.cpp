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
        ListNode* ans=new ListNode();
        ListNode* traverse=ans;
        int rem=0;
        while(l1 != NULL || l2 != NULL || rem != 0)
        {
            int a=0;
            if(l1!=NULL)
                a=l1->val;        
            int b=0;
            if(l2!=NULL)
                b=l2->val; 
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
            
            int c = a + b + rem;
            rem = c / 10;
            c %= 10;
            
            traverse->next = new ListNode(c); 
            traverse = traverse->next;
        }
        return ans->next;
    }
};