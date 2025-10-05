use num_integer::gcd;

impl Solution {
    pub fn gcd_of_strings(str1: String, str2: String) -> String {
        let a = format!("{}{}", str1, str2);
        let b = format!("{}{}", str2, str1);
        if a != b {
            return String::new();
        }
        fn gcd (mut x: usize, mut y: usize) -> usize {
            while y != 0 {
                let tmp = y;
                y = x % y;
                x = tmp;
            }
            x
        }
        let g = gcd(str1.len(), str2.len());
        str1[..g].to_string()
    }

    /*
    PSEUDOCODE:
    if str1 + str2 != str2 + str1: return ""
    g := gcd(len(str1), len(str2))
    return str1[0..g]
    */
