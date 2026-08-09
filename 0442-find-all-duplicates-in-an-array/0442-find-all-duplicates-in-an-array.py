class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        freq = {}
        res = []
        for i in nums:
            if i not in freq:
                freq[i]=1
            else:
                freq[i]+=1
        for i in freq:
            if freq[i]>1:
                res.append(i)
        return res