class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n1=nums1.size();
         int n2=nums2.size();
         int n3=nums3.size();
        unordered_set<int>s;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    s.insert({nums1[i]});
                }
            }
        }
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n3;j++)
            {
                if(nums1[i] == nums3[j])
                {
                    s.insert(nums1[i]);
                }
            }
        }
        for(int i=0;i<n3;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums3[i] == nums2[j])
                {
                    s.insert(nums3[i]);
                }
            }
        }
        vector<int>vec;
        for(auto it : s)
        {
            vec.push_back(it);
        }
        return vec;
        
    }
};