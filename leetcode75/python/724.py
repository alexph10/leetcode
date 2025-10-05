from typing import List

class Solution:
    def pivotIndex(self, nums: List[int], ) -> int:
        total = sum(nums)
        left = 0 
        for i, x in enumerate(nums):
            if left == total - left - x:
                return i
            left += x
        return -1
    



'''
FUNCTION pivotIndex(nums: array[int]) -> int
    total := sum(nums)
    left := 0
    FOR i FROM 0 TO len(nums)-1:
        IF left == total - left - nums[i]:
            RETURN i
        left := left + nums[i]
    RETURN -1

'''