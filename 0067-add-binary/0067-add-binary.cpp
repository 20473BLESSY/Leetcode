class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        
        int carry=0;
        int n1= a.size()-1;
        int n2 = b.size()-1;
        while(n1 >=0  || n2 >=0)
        {
            int sum = carry;
            if(n1 >=0) sum += a[n1--]-'0';
            if(n2 >=0)  sum += b[n2--]-'0';
            carry = sum >1 ? 1 :0;
            res += to_string(sum %2);
        }
        if(carry) res += to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};