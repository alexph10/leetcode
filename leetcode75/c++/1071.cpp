#include <string>

using namespace std;

class Solution {
public:
  string gcdOfString(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
      return "";
    }
    size_t g = std::gcd(str1.size(), str2.size());
    return str1.substr(0,g);
  }
};