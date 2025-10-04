#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int max_c = *max_element(candies.begin(), candies.end());
    vector<bool> ans;
    for (int c : candies) {
      ans.push_back(c + extraCandies >= max_c);
    }

    return ans;
  }
};