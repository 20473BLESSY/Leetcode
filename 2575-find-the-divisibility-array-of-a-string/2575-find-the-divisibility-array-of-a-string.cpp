class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.size();
        vector<int>arr;
        long long x=0;
        for(int i=0;i<word.size();i++)
        {
            x = (x*10) +(word[i] -'0');
            x = x%m;
            
            if(x==0)
                arr.push_back(1);
            else
                arr.push_back(0);
            
        }
        return arr;
    }
};