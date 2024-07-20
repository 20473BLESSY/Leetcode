class Solution {
public:
    string clearDigits(string s) {
        
        string res;
        for(char i : s)
        {
            if(isdigit(i))
            {
                res.pop_back();
            }
            else{
                res +=i;
            }
        }
        
        return res;
    }
};