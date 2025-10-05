#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
  bool isIsomorphic(string s, string t) {
    if (s.size() != t.size())
      return false;
    unordered_map<char, char> m1;
    unordered_map<char, char> m2;

    for (size_t i = 0; i < s.size(); i++) {
      char cs = s[i], ct = t[i];
      if (m1.count(cs)) {
        if (m1[cs] != ct)
          return false;

      } else {
        m1[cs] = ct;
      }
      if (m2.count(ct)) {
        if (m2[ct] != cs ) return false;
      } else {
        m2[ct] = cs;
      }
    }
    return true;
  }
};



/*

FUNCTION isIsomorphic(s, t):
    IF length(s) != length(t) THEN
        RETURN false

    create empty map map_s_to_t
    create empty map map_t_to_s

    FOR i from 0 to length(s)-1:
        cs = s[i]
        ct = t[i]

        IF cs is in map_s_to_t:
            IF map_s_to_t[cs] != ct:
                RETURN false
        ELSE:
            map_s_to_t[cs] = ct

        IF ct is in map_t_to_s:
            IF map_t_to_s[ct] != cs:
                RETURN false
        ELSE:
            map_t_to_s[ct] = cs

    END FOR

    RETURN true


*/