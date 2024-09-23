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
        ListNode *d = new ListNode(-1);
        ListNode *td = d;
        while(list1 != nullptr and list2 != nullptr)
        {
            if(list1->val < list2->val)
            {
                d->next = list1;
                list1 = list1->next;
            }
            else{
                 d->next = list2;
                list2 = list2->next;
            }
            d= d->next;
        }
        if(list1 == nullptr)
        {
            d->next = list2;
        }
        else if(list2 == nullptr)
        {
            d->next = list1;
        }
        return td->next;
        
    }
};