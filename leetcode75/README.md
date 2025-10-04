# LeetCode Practice – Problem Briefs

## Index

|    # | Title                                    | Pattern        | Difficulty | Link                                                                                                                                               | Status        |
| ---: | ---------------------------------------- | -------------- | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------- | ------------- |
| 1431 | Kids With the Greatest Number of Candies | Array, Max     | Easy       | [https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) |  Done        |
| 1480 | Running Sum of 1d Array                  | Prefix Sum     | Easy       | [https://leetcode.com/problems/running-sum-of-1d-array/](https://leetcode.com/problems/running-sum-of-1d-array/)                                   |  Done        |
|  724 | Find Pivot Index                         | Prefix Sum     | Easy       | [https://leetcode.com/problems/find-pivot-index/](https://leetcode.com/problems/find-pivot-index/)                                                 |  In progress |
|  392 | Is Subsequence                           | Two Pointers   | Easy       | [https://leetcode.com/problems/is-subsequence/](https://leetcode.com/problems/is-subsequence/)                                                     |  In progress |
|  205 | Isomorphic Strings                       | Hash Maps      | Easy       | [https://leetcode.com/problems/isomorphic-strings/](https://leetcode.com/problems/isomorphic-strings/)                                             |  Next        |
|  121 | Best Time to Buy and Sell Stock          | One-pass Scan  | Easy       | [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                   |  Next        |
|  643 | Maximum Average Subarray I               | Sliding Window | Easy       | [https://leetcode.com/problems/maximum-average-subarray-i/](https://leetcode.com/problems/maximum-average-subarray-i/)                             |  Next        |

> **Note:** Problem statements are paraphrased to avoid reproducing proprietary text.

---

## 1431 — Kids With the Greatest Number of Candies

**Task:** For each kid `i`, determine if giving them all `extraCandies` results in a value ≥ the current global maximum in `candies`.

**Core idea:** Let `M = max(candies)`. Return `[candies[i] + extraCandies >= M for i]`.

**Time/Space:** `O(n)` / `O(n)` (output) and `O(1)` aux.

**Edge checks:** `extraCandies = 0`; multiple kids already at `M`; ties count as greatest.

**Example:**

* `candies=[2,3,5,1,3], extra=3 → [true,true,true,false,true]`

---

## 1480 — Running Sum of 1d Array

**Task:** Return `runningSum[i] = nums[0] + … + nums[i]`.

**Core idea (prefix sum):** Maintain `curr += nums[i]`, append `curr`.

**Time/Space:** `O(n)` / `O(1)` aux (besides output). In‑place variant: `nums[i] += nums[i-1]` for `i≥1`.

**Edge checks:** empty array; negatives; potential overflow in narrow types.

**Example:**

* `nums=[1,2,3,4] → [1,3,6,10]`

---

## 724 — Find Pivot Index

**Task:** Return the leftmost index `i` where `sum(nums[0..i-1]) == sum(nums[i+1..end])`. If none, return `-1`.

**Core idea (prefix sums without array):** Let `total = sum(nums)`, track `left = 0`. At each `i`, right sum = `total - left - nums[i]`. Pivot if `left == total - left - nums[i]`; then update `left += nums[i]`.

**Time/Space:** `O(n)` / `O(1)`.

**Edge checks:** single element (index `0` is a valid pivot), multiple pivots → return first, all negatives.

**Example:**

* `nums=[1,7,3,6,5,6] → 3`

---

## 392 — Is Subsequence

**Task:** Determine if string `s` is a subsequence of `t` (characters appear in order, not necessarily contiguous).

**Core idea (two pointers):** Scan `t` with pointer `j`; advance `i` in `s` when `s[i] == t[j]`. Success if `i == len(s)`.

**Time/Space:** `O(|t|)` / `O(1)`.

**Edge checks:** empty `s` → true; `|s| > |t|` → false; repeated characters.

**Example:**

* `s="abc", t="ahbgdc" → true`

---

## 205 — Isomorphic Strings

**Task:** Check if two strings `s` and `t` can be transformed character‑by‑character via a bijection (one‑to‑one mapping) from characters of `s` to characters of `t`.

**Core idea (two hash maps or one map + seen set):** Ensure consistent mapping `s→t` and that no two different `s` characters map to the same `t` character.

**Time/Space:** `O(n)` / `O(Σ)` where `Σ` is alphabet size.

**Edge checks:** differing lengths → false; repeated patterns (e.g., `paper` vs `title` → true; `foo` vs `bar` → false).

**Example:**

* `s="egg", t="add" → true`

---

## 121 — Best Time to Buy and Sell Stock

**Task:** Given daily prices, find the maximum profit from one buy then one sell (must buy before sell). If no profit is possible, return `0`.

**Core idea (one‑pass min‑so‑far):** Track `minPrice` so far and update `maxProfit = max(maxProfit, price - minPrice)` at each step.

**Time/Space:** `O(n)` / `O(1)`.

**Edge checks:** monotonically decreasing prices → `0`; single day.

**Example:**

* `prices=[7,1,5,3,6,4] → 5`

---

## 643 — Maximum Average Subarray I

**Task:** For array `nums` and window size `k`, find the maximum average value of any contiguous subarray of length `k`.

**Core idea (fixed sliding window):** Compute sum of first `k`; slide by subtracting outgoing and adding incoming element; track maximum sum, then divide by `k` at the end.

**Time/Space:** `O(n)` / `O(1)`.

**Edge checks:** `k == len(nums)`; negatives; large `n`.

**Example:**

* `nums=[1,12,-5,-6,50,3], k=4 → 12.75`

---

## Template for Additional Problems

Copy this block when adding more items.

```md
### <number> — <title>
**Task:** <single‑sentence paraphrase of the goal>.

**Core idea:** <one or two lines on the key insight/pattern>.

**Time/Space:** <asymptotics>.

**Edge checks:** <bulleted list of noteworthy cases>.

**Example:**
- <minimal input → output>
```

---

## Suggested Repository Layout

```text
.
├── README.md
├── python/
│   ├── lc_1431.py
│   ├── lc_1480.py
│   ├── lc_0724.py
│   ├── lc_0392.py
│   ├── lc_0205.py
│   ├── lc_0121.py
│   └── lc_0643.py
└── cpp/
    ├── lc_1431.cpp
    ├── lc_1480.cpp
    ├── lc_0724.cpp
    ├── lc_0392.cpp
    ├── lc_0205.cpp
    ├── lc_0121.cpp
    └── lc_0643.cpp
```

## Notes

* Keep briefs short and implementation‑oriented.
* When adding solutions, include minimal unit tests or example runs next to each file for quick verification.
* Maintain a simple progress log in the table (✅ / ⏳ / ❌).
