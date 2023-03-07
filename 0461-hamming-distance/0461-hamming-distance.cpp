class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        for(int i=0;i<31;i++)
        {
            if(((x>>i)&1)^((y >>i)&1) ==1)
            {
                c +=1;
            }
        }
        return c;
    }
};