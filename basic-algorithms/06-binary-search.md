# Problem 6: Binary Search

**LeetCode Number:** 704  
**Difficulty:** Easy  
**Topic:** Basic Algorithms  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/binary-search/

## Problem Description

Given a sorted integer array and a target value, return the index of the target if it exists. Otherwise, return -1.

## Approach: Binary Search

I used the Binary Search technique to solve this problem.

1. Initialize `left` to 0 and `right` to the last index.
2. Calculate the middle index.
3. Compare the middle element with the target.
4. If both are equal, return the middle index.
5. If the target is greater, search the right half.
6. If the target is smaller, search the left half.
7. Continue until the target is found or the search range becomes empty.

## Complexity Analysis

- **Time Complexity:** O(log n) – The search space is divided into half during each iteration.
- **Space Complexity:** O(1) – Only a fixed number of variables are used.

## Test Cases

| Input | Expected Output |
|---|---|
| `[-1,0,3,5,9,12], target = 9` | 4 |
| `[-1,0,3,5,9,12], target = 2` | -1 |
| `[5], target = 5` | 0 |

## Key Learnings

- Understood the Binary Search technique.
- Learned how to divide a sorted array into halves.
- Practised using left, right and middle pointers.
- Understood the importance of sorted input in Binary Search.

## Submission Status

**LeetCode Status:** Update after submission.

**Local Testing:** Update after testing.