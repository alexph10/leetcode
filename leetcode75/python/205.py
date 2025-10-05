class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool :
        if len(s) != len(t): 
            return False
        map_s_to_t = {}
        map_t_to_s = {}
        
        for cs, ct in zip(s, t):
            if cs in map_s_to_t:
                if map_s_to_t[cs] != ct:
                    return False
            else:
                map_s_to_t[cs] = ct
            
            if ct in map_t_to_s:
                if map_t_to_s[ct] != cs:
                    return False
            
            else:
                map_t_to_s[ct] = cs
        return True


'''
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
'''