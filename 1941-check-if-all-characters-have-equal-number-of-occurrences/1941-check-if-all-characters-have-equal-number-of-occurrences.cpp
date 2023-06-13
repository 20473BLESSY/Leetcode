class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int ln = s.size();
        unordered_map<char,int>m;
        for(int i=0;i<ln;i++)
        {
            m[s[i]]++;   
        }
        int  c= m[s[0]];
        for(auto it :m)
        {
            
        if(c != it.second)
        {
            return false;
        }
        }
        return true;
        
    }
};