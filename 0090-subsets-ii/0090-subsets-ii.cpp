class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        map<vector<int>,int>m;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<pow(2,n);i++)
        {    vector<int>arr;
            for(int j=0;j<n;j++)
            {
                if(((i>>j) &1) ==1)
                {
                    arr.push_back(nums[j]);
                }
            }
            if(m.find(arr) == m.end())
            {
                m[arr]=1;
            }
         
        }
        for(auto &it: m)
        {
            res.push_back(it.first);
        }
        return res;
        
    }
};