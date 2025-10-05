#include <string>

using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    size_t i = 0, j = 0;
    const size_t n = word1.size(), m = word2.size();
    string res;
    res.reserve(n + m);
    while (i < n || j < m) {
      if (i < n)
        res.push_back(word1[i++]);
      if (j < m)
        res.push_back(word2[j++]);
    }
    return res;
  }
};

/*
FUNCTION mergeAlternately(word1: string, word2: string) -> string
    i := 0
    j := 0
    result := empty string builder

    WHILE i < LENGTH(word1) AND j < LENGTH(word2):
        APPEND word1[i] TO result
        APPEND word2[j] TO result
        i := i + 1
        j := j + 1

    # append any remaining tail
    IF i < LENGTH(word1):
        APPEND SUBSTRING(word1, i, LENGTH(word1)-i) TO result
    IF j < LENGTH(word2):
        APPEND SUBSTRING(word2, j, LENGTH(word2)-j) TO result

    RETURN result

*/