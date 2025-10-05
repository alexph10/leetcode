use std::collections::HashMap;

impl Solution {
    pub fn is_isomorphic(s: String, t: String) -> bool {
        if s.len() != t.len() {
            return false;
        }
        let mut s_to_t: HashMap<char, char> = HashMap::new();
        let mut t_to_s: HashMap<char, char> = HashMap::new();

        for (char_s, char_t) in s.chars().zip(t.chars()) {
            if let Some(&mapped_char) = s_to_t.get(&char_s) {
                if mapped_char != char_t {
                    return false;
                }
            } else {
                s_to_t.insert(char_s, char_t);
            }

            if let Some(&mapped_char) = t_to_s.get(&char_t) {
                if mapped_char != char_s {
                    return false;
                }
            } else {
                t_to_s.insert(char_t, char_s)
            }
        }
        true
    }
}


/*
ALGORITHM IsomorphicStrings(s, t):
    // Step 1: Basic validation
    IF length(s) != length(t) THEN
        RETURN false
    END IF
    
    // Step 2: Initialize bidirectional mappings
    CREATE empty hashmap s_to_t  // Maps chars from s to t
    CREATE empty hashmap t_to_s  // Maps chars from t to s
    
    // Step 3: Process each character pair
    FOR i = 0 TO length(s) - 1 DO
        char_s = s[i]
        char_t = t[i]
        
        // Step 4: Check existing mapping from s to t
        IF char_s EXISTS IN s_to_t THEN
            IF s_to_t[char_s] != char_t THEN
                RETURN false  // Inconsistent mapping
            END IF
        ELSE
            s_to_t[char_s] = char_t  // Create new mapping
        END IF
        
        // Step 5: Check existing mapping from t to s
        IF char_t EXISTS IN t_to_s THEN
            IF t_to_s[char_t] != char_s THEN
                RETURN false  // Inconsistent reverse mapping
            END IF
        ELSE
            t_to_s[char_t] = char_s  // Create new reverse mapping
        END IF
    END FOR
    
    // Step 6: All mappings are consistent
    RETURN true
END ALGORITHM
*/