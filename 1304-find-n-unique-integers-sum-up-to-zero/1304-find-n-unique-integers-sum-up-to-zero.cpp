class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
          for(int i=1;i<=n/2;i++)
            {
                vec.push_back(i);
                vec.push_back(-i);
            }
        if(n%2 ==0)
        {
          return vec;
        }
        else{
            vec.push_back(0);
            return vec;
        }
        
    }
};