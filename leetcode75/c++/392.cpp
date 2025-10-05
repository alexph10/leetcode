#include <string>
using namespace std;
class Solution {
public:
  
  bool isSubsequence(string s, string t) {
    int i = 0;
    for (char c : t) {
      if (i < (int)s.size() && s[i] == c) {
        i++;
      }
    }
    return i == (int)s.size();
  }
};

/*
FUNCTION isSubsequence(s: string, t: string) -> bool
    i := 0                          // pointer for s
    FOR each ch IN t:
        IF i < len(s) AND s[i] == ch:
            i := i + 1
            IF i == len(s):
                RETURN true
    RETURN i == len(s)

*/