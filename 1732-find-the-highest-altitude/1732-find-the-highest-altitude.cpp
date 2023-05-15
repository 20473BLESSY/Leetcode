class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int pre[n+1];
        pre[0] = 0;
        for(int i=0;i<n;i++)
        {
            pre[i+1] = pre[i]+gain[i];
        }
        return *max_element(pre,pre+(n+1));
    }
};