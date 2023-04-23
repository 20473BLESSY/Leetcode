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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * f = head;
        ListNode * s = head;
        ListNode * th =head;
        ListNode * mid;
        while(f->next != NULL && f->next->next != NULL)
        {
            f= f->next->next;
        
            s = s->next;
        }
        if(f->next == NULL)
        {
            mid = s;
        }
        else{
            mid = s->next;
        }
        if(!head->next) return NULL;
        
        while(head->next != mid)
        {
            head = head->next;
        }
        ListNode * nn = head->next->next;
        head->next = nn;
        return th;
            
        
    }
};