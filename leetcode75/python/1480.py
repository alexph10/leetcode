from typing import List 

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        curr = 0 
        ans = []
        for x in nums:
            curr += x
            ans.append(curr)
        return ans
    


'''
FUNCTION runningSum(nums: array[int]) -> array[int]
    curr := 0
    result := empty list
    FOR each x IN nums:
        curr := curr + x
        append curr TO result
    RETURN result

'''