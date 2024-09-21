class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                stk.push(s[i]);
            }
            else{
                
                if(stk.empty())
                {
                    return false;
                }
                else if(s[i] == ')' and stk.top() == '(')
                {
                    stk.pop();
                }
                else if(s[i] == '}' and stk.top() == '{')
                {
                    stk.pop();
                }
                else if(s[i] == ']' and stk.top() == '[')
                {
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        return stk.empty();
        
    }
};