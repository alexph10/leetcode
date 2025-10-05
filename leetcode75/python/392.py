class Solution:
    def isSubsequence(self, s:str, t:str) -> bool:
        i = 0 
        for char in t:
            if i < len(s) and s[i] == char:
                i += 1
        return i == len(s)
    




'''
FUNCTION isSubsequence(s: string, t: string) -> bool
    i := 0                          // pointer for s
    FOR each ch IN t:
        IF i < len(s) AND s[i] == ch:
            i := i + 1
            IF i == len(s):
                RETURN true
    RETURN i == len(s)

'''