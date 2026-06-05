class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: 
            return 0
        current_max = nums[0]
        current_min = nums[0]
        best = nums[0]

        for i in range(1, len(nums)):
            num = nums[i]
            temp_max = max(num, current_max*num, current_min*num)
            current_min = min(num, current_max * num, current_min * num)
            current_max = temp_max
            best = max(best, current_max)
        return best