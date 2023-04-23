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
    bool isPalindrome(ListNode* head) {
       vector<int>v;
        vector<int>s;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head = head->next;
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            s.push_back(v[i]);
        }
        int f=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] != s[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};