#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
  int pivotIndex(vector<int> &nums) {
    long long total = accumulate(nums.begin(), nums.end(), 0LL);
    long long left = 0;
    for (int i = 0; i < (int)nums.size(); i++) {
      if (left == total - left - nums[i])
        return i;
      left += nums[i];
    }
    return -1;
  }
};

/*
FUNCTION pivotIndex(nums: array[int]) -> int
    total := sum(nums)
    left := 0
    FOR i FROM 0 TO len(nums)-1:
        IF left == total - left - nums[i]:
            RETURN i
        left := left + nums[i]
    RETURN -1

*/