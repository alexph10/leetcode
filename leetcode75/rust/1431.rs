impl Solution {
    pub fn kids_with_candies (candies: Vec<i32>, extra_candies: i32) -> Vec<bool> {
       let &max_v = candies.iter().max().unwrap_or(&0);
       candies.into_iter().map(|c| c + extra_candies >= max_v).collect()
    }
}

/*
PSEUDOCODE:
FUNCTION kidsWithCandies(candies, extra):
    M := max(candies)
    result := empty list
    FOR each c IN candies:
        append (c + extra >= M) TO result
    RETURN result

Time: O(n). Space: O(n) for output.
*/