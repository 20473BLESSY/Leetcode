class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.size();
        vector<int>arr(n);
        long long x=0;
        for(int i=0;i<word.size();i++)
        {
            x = (x*10) +(word[i] -'0');
            x = x%m;
            
            if(x==0)
                arr[i] = 1;
            else
                arr[i] =0;
            
        }
        return arr;
    }
};