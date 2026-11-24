# Problem 7: Move Zeroes

**LeetCode Number:** 283  
**Difficulty:** Easy  
**Topic:** Basic Algorithms  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/move-zeroes/

## Problem Description

Move all zeroes in an array to the end while maintaining the relative order of non-zero elements.

## Approach

I used the Two-Pointer technique.

1. Initialize `position` to 0.
2. Traverse the array.
3. Whenever a non-zero element is found, place it at `nums[position]`.
4. Increment `position`.
5. Fill all remaining positions with zeroes.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Test Cases

| Input | Expected Output |
|---|---|
| `[0,1,0,3,12]` | `[1,3,12,0,0]` |
| `[0]` | `[0]` |
| `[1,2,3]` | `[1,2,3]` |

## Key Learnings

- Understood the Two-Pointer technique.
- Learned in-place array modification.
- Practised maintaining the order of array elements.

## Submission Status

**LeetCode Status:** Update after submission.