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

/*
FUNCTION gcd(a: int, b: int) -> int
    WHILE b != 0:
        temp := b
        b := a MOD b
        a := temp
    RETURN a

FUNCTION gcdOfStrings(str1: string, str2: string) -> string
    # Quick structural check
    IF str1 + str2 != str2 + str1:
        RETURN ""                       # no common string divisor

    # length of greatest divisor is gcd(len1, len2)
    len1 := LENGTH(str1)
    len2 := LENGTH(str2)
    g := gcd(len1, len2)

    RETURN SUBSTRING(str1, 0, g)       # first g characters of str1

*/