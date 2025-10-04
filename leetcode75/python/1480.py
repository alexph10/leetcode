from typing import List 

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        curr = 0 
        ans = []
        for x in nums:
            curr += x
            ans.append(curr)
        return ans
    
