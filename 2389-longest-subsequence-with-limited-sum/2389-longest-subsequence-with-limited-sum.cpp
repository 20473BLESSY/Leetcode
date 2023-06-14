class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>sm(n);
        sm[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sm[i] = sm[i-1] +nums[i];
        }
        int m = queries.size();
        vector<int>ans(m,0);
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                if(sm[j]  <= queries[i])
                {
                    ans[i] = j+1;
                }
            }
        }
        return ans;
        
    }
};