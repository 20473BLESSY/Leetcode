class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s = ''.join([str(x) for x in num])
        t = str(int(s)+k)
        lis = []
        for i in t:
            lis.append(int(i))
        return lis
        
        