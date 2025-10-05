from math import gcd

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        if str1 + str2 != str2 + str1:
            return ""
        return str1[:gcd(len(str1, len(str2)))]
    




'''
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

'''