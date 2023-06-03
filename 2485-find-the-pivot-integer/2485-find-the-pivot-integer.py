class Solution:
    def pivotInteger(self, n: int) -> int:
        for k in range(1,n+1):
            if((k*(k+1))//2) == sum([ i for i in range(k,n+1)]):
                return k
                break
        return -1
            
        