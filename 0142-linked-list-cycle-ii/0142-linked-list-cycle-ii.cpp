/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* f= head;
        ListNode * s= head;
        int k=0,dt;
        ListNode * h= head;
        ListNode * d = new ListNode(-1);
        while(f!= NULL && f->next != NULL)
        {
            f= f->next->next;
            s = s->next;
            if(f==s)
            {
               
                s= head;
                while(s!= f)
                {
                    f=f->next;
                    s=s->next;
                }
                return s;
            }
            
        }
       
     return NULL;
        
    }
};