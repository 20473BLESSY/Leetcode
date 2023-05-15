class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>vec;
        vec.push_back(-1);
        int mx = INT_MIN;
        for(int i=n-1;i>0;i--)
        {
            mx = max(mx,arr[i]);
            vec.push_back(mx);
        }
        vector<int>ans;
        for(int i=n-1;i>=0;i--)
        {
            ans.push_back(vec[i]);
        }
        return ans;
    }
};