impl Solution {
    pub fn gcd_of_strings(str1: String, str2: String) -> String {
        if str1.clone() + &str2 != str2.clone() + &str1 {
            return String::new();
        }

        let gcd_length = Self::gcd(str1.len(), str2.len());
        
        str1[..gcd_length].to_string()
    }

    fn gcd(a: usize, b: usize) -> usize {
        if b == 0 {
            a
        } else {
            Self::gcd(a, a % b)
        }
    }
}


/*
PSEUDOCODE:
if str1 + str2 != str2 + str1: return ""
g := gcd(len(str1), len(str2))
return str1[0..g]
*/