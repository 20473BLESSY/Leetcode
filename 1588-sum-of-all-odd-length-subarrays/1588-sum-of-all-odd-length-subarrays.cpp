class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sm =0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
              
                    if((abs(i-j))%2 ==0)
                    {
                        for(int k=i;k<=j;k++){
                        sm += arr[k];
                        }
                    }
                
            }
        }
        return sm;
    }
};