class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        int n = mat.size();
        unordered_set<int>s1,s2;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                if(s1.find(mat[i][j]) != s1.end())
                {
                    return false;
                }
                else{
                    s1.insert(mat[i][j]);
                }
                if(s2.find(mat[j][i]) != s2.end())
                {
                    return false;
                }
                else{
                    s2.insert(mat[j][i]);
                }
            }
            s1.clear();
            s2.clear();
        }
        return true;
    }
};