from typing import List 

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int ) -> List[bool]:
        max_c = max(candies)
        return [c + extraCandies >= max_c for c in candies]
    


'''
FUNCTION kidsWithCandies(candies: array[int], extra: int) -> array[bool]
    M := max(candies)
    result := empty list
    FOR each c IN candies:
        append (c + extra >= M) TO result
    RETURN result

'''
