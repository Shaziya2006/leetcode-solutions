# Problem 3: Valid Anagram

**LeetCode Number:** 242  
**Difficulty:** Easy  
**Topic:** Strings  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/valid-anagram/

## Problem Description

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`.

Two strings are anagrams if they contain the same characters with the same frequency.

## Approach: Character Frequency Counting

I used an integer array of size 26 to store the frequency of lowercase English letters.

1. Initialize all frequency values to zero.
2. Traverse the first string and increment the corresponding character count.
3. Traverse the second string and decrement the corresponding character count.
4. Check whether all frequency values are zero.
5. If all counts are zero, return true; otherwise, return false.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1), because the frequency array has a fixed size of 26.

## Test Cases

| Input | Expected Output |
|---|---|
| `"anagram", "nagaram"` | true |
| `"rat", "car"` | false |
| `"listen", "silent"` | true |

## Key Learnings

- Learned character frequency counting.
- Understood how to map lowercase letters to array indices.
- Practised using arrays to solve string problems.
- Learned how to compare character frequencies efficiently.

## Submission Status

**LeetCode Status:** Update after submission.

**Local Testing:** Update after testing in an approved environment.