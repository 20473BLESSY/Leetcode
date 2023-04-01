class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        mx=0
        for i in sentences:
            p=[]
            p = list(map(str,i.split()))
            mx = max(len(p),mx)
        return mx
        