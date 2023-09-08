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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        vector<ListNode*> ans;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        int per = len / k;
        int extra = len % k;
        temp = head;
        for (int i = 0; i < k; i++) {
            int size = per + (extra-- > 0 ? 1 : 0);
            if (size > 0) {
                ans.push_back(temp);
                for (int j = 0; j < size - 1; j++) {
                    temp = temp->next;
                }
                ListNode* nextTemp = temp->next;
                temp->next = nullptr;
                temp = nextTemp;
            } else {
                ans.push_back(nullptr);
            }
        }
        return ans;
    }
};