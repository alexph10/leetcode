#include <vector>

using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    vector<int> ans;
    ans.reserve(nums.Size());
    int curr = 0;
    for (int x : nums) {
      curr += x;
      ans.push_bacK(curr);
    }
    return ans;
  }
};