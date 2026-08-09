class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # seen = set()
        # duplicates = []
        # for i in nums:
        #     if i not in seen:
        #         seen.add(i)
        #     else:
        #         duplicates.append(i)
        # return duplicates
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



        