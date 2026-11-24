# Problem 4: Best Time to Buy and Sell Stock

**LeetCode Number:** 121  
**Difficulty:** Easy  
**Topic:** Arrays  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Description

Given an array of stock prices where each element represents the price of a stock on a particular day, find the maximum profit that can be achieved by buying on one day and selling on a later day.

If no profit is possible, return 0.

## Approach: Single Pass

I used a single-pass approach to solve this problem.

1. Initialize `minPrice` with the first stock price.
2. Initialize `maxProfit` to zero.
3. Traverse the array from the second element.
4. Update the minimum price whenever a lower price is found.
5. Calculate the possible profit using the current price and minimum price.
6. Update the maximum profit if a higher profit is found.

## Complexity Analysis

- **Time Complexity:** O(n) – The array is traversed only once.
- **Space Complexity:** O(1) – Only two variables are used.

## Test Cases

| Input | Expected Output |
|---|---|
| `[7,1,5,3,6,4]` | 5 |
| `[7,6,4,3,1]` | 0 |
| `[2,4,1]` | 2 |

## Key Learnings

- Learned how to find maximum profit using arrays.
- Understood the single-pass technique.
- Practised updating minimum and maximum values.
- Improved problem-solving and array traversal skills.

## Submission Status

**LeetCode Status:** Update after submission.

**Local Testing:** Update after testing.