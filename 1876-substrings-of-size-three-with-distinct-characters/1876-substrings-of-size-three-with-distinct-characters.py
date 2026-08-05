class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        k = 3
        count = 0
        s0 = s[:k]
        s1 = set(s0)
        if len(s1)==3:
            count +=1

        for i in range(k,len(s)):
            s0 = s0[1:]+s[i]
            
            s1 = set(s0)
            if len(s1)==3:
                count +=1
        return count
        