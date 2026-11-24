# Problem 5: Longest Common Prefix

**LeetCode Number:** 14  
**Difficulty:** Easy  
**Topic:** Strings  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/longest-common-prefix/

## Problem Description

Given an array of strings, find the longest common prefix shared by all the strings. If there is no common prefix, return an empty string.

## Approach: Vertical Scanning

I used the Vertical Scanning technique.

1. Take the first string as the initial prefix.
2. Compare the prefix with every other string.
3. If a mismatch occurs, reduce the prefix length.
4. Continue comparing until the prefix matches all strings or becomes empty.
5. Return the remaining prefix.

## Complexity Analysis

- **Time Complexity:** O(S), where S is the total number of characters across all strings.
- **Space Complexity:** O(m), where m is the length of the first string, for storing the prefix.

## Test Cases

| Input | Expected Output |
|---|---|
| `["flower","flow","flight"]` | `"fl"` |
| `["dog","racecar","car"]` | `""` |
| `["apple","application","apply"]` | `"appl"` |

## Key Learnings

- Learned how to compare multiple strings.
- Understood the Vertical Scanning technique.
- Practised using string functions such as `strlen()`, `strcpy()`, and `strncmp()`.
- Learned dynamic memory allocation using `malloc()` and `free()`.

## Submission Status

**LeetCode Status:** Update after submission.

**Local Testing:** Update after testing.