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

/*
FUNCTION kidsWithCandies(candies: array[int], extra: int) -> array[bool]
    M := max(candies)
    result := empty list
    FOR each c IN candies:
        append (c + extra >= M) TO result
    RETURN result

*/