class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            res.push_back(arr[i]);
            if(res.size()==n)
            {
                break;
            }
            if(arr[i]==0){
                
                res.push_back(0);
            }
            if(res.size()==n)
            {
                break;
            }
        }
        arr = res;
        
    }
};