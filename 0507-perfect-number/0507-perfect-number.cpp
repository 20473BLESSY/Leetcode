class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long sum =0;
        if(num==1) return false;
        for(long long i=2;i*i<=num;i++)
        {
            if(num%i ==0)
            {
                sum += i;
                sum += (num/i);
            }
        }
        return sum+1 == num;
        
    }
};