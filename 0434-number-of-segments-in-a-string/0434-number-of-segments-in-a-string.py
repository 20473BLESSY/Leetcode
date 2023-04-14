class Solution:
    def countSegments(self, s: str) -> int:
        p=list(map(str,s.split()))
        return len(p)
        