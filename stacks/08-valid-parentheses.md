# Problem 8: Valid Parentheses

**LeetCode Number:** 20  
**Difficulty:** Easy  
**Topic:** Stack  
**Language:** C  
**LeetCode Link:** https://leetcode.com/problems/valid-parentheses/

## Problem Description

Determine whether a string containing parentheses, curly brackets and square brackets is valid.

## Approach: Stack

I used a Stack data structure following the LIFO principle.

1. Push every opening bracket onto the stack.
2. For every closing bracket, check whether the stack is empty.
3. Compare the closing bracket with the top element.
4. If they match, pop the top element.
5. If they do not match, return false.
6. Finally, check whether the stack is empty.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Test Cases

| Input | Expected Output |
|---|---|
| `"()"` | true |
| `"()[]{}"` | true |
| `"(]"` | false |
| `"([)]"` | false |
| `"{[]}"` | true |

## Key Learnings

- Understood the Stack data structure.
- Learned the LIFO principle.
- Practised push and pop operations.
- Learned how stacks can be used to validate brackets.

## Submission Status

**LeetCode Status:** Update after submission.