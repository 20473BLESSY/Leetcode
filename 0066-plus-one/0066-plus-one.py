class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s = ""
        lis = []
        s=''.join([str(x) for x in digits])
        
        t = int(s)+1
        lis = list(str(t))
        l = [int(i) for i in lis]
        return l
        
            
            
        