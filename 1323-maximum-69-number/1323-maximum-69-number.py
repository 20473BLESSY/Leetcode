class Solution:
    def maximum69Number (self, num: int) -> int:
        f=0
        s=""
        for i in str(num):
            if(f==0 and i== '6'):
                s += '9'
                f=1
            else:
                s += i
        return int(s)