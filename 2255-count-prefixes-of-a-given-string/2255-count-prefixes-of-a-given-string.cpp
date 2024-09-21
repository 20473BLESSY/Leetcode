class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int len = s.size();
        int c=0;
        for(auto i : words)
        {
            int n = i.size();
            if(i == s.substr(0,n))
               {
                   c++;
               }
            
        }
               return c;
    }
};