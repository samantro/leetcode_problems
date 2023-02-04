class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        m=0
        n=-10001
        for i in nums:
            m += i
            if n<m:
                n=m
            if m < 0: 
                m=0
        return n
        
        