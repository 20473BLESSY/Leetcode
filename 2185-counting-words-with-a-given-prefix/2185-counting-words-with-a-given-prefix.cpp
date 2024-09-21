class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int len = pref.size(), c=0;
        
        for(string i : words)
        {
            if(i.substr(0,len) == pref)
            {
                c++;
            }
        }
        return c;
    }
};