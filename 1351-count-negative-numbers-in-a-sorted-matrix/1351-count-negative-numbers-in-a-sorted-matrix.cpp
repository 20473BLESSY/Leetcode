class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid[0].size();
        int m = grid.size();
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(grid[i][j] <0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};