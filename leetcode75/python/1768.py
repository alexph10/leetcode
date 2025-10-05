from typing import *

class Solution:
    def mergeAlternately(Self, word1: str, word2: str) -> str:
        i = j = 0
        n,m  = len(word1), len(word2)
        out = []
        while i < n:
            if i < n:
                out.append(word1[i]); i += 1
                
            if j < m:
                out.append(word2[j]); j += 1
            
        return ''.join(out)
    

'''
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

'''