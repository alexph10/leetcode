#include <vector>

using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    vector<int> ans;
    ans.reserve(nums.size());
    int curr = 0;
    for (int x : nums) {
      curr += x;
      ans.push_back(curr);
    }
    return ans;
  }
};

/*
FUNCTION runningSum(nums: array[int]) -> array[int]
    curr := 0
    result := empty list
    FOR each x IN nums:
        curr := curr + x
        append curr TO result
    RETURN result

*/