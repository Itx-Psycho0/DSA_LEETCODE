class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:

        n=len(nums)
        # if n == 1:
        #     return nums[0]/k
        max_sum=float("-inf")
       
        wind_sum=sum(nums[:k])
        max_sum=wind_sum
        for i in range(k,n):
            wind_sum+=nums[i]
            wind_sum-=nums[i-k]

            max_sum=max(max_sum,wind_sum)
        return max_sum/k