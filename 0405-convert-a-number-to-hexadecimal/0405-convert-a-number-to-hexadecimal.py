class Solution:
    def toHex(self, num: int) -> str:
        lis = "0123456789abcdef"
        res =""
        if num ==0:
            return "0"
        elif num <0 :
            num += 2**32
        while num:
            res = lis[num%16]+res
            num = num//16
        return res