# Problem 2: Reverse String

**LeetCode Number:** 344  
**Difficulty:** Easy  
**Topic:** Strings  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/reverse-string/

## Problem Description

Given a character array `s`, reverse the array in place without using extra space.

## Approach: Two Pointer Technique

I used the Two Pointer technique to reverse the string.

- Initialize `left` at the beginning of the array.
- Initialize `right` at the end of the array.
- Swap the characters at both positions using a temporary variable.
- Move `left` forward and `right` backward.
- Repeat until both pointers meet.

## Complexity Analysis

- **Time Complexity:** O(n) – Each character is processed at most once.
- **Space Complexity:** O(1) – Reversal is performed in place without using extra space.

## Test Cases

| Input | Expected Output |
|---|---|
| `['h','e','l','l','o']` | `['o','l','l','e','h']` |
| `['H','a','n','n','a','h']` | `['h','a','n','n','a','H']` |
| `['a']` | `['a']` |

## Key Learnings

- Understood the Two Pointer technique.
- Learned how to reverse a character array in place.
- Practised swapping elements using a temporary variable.
- Understood how to handle edge cases such as a single-character array.

## Submission Status

**LeetCode Status:** Accepted

**Local Testing:** Execution attempted, but Windows Application Control blocked the compiled executable.