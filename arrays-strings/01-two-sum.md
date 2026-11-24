
# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used the Brute Force approach with two nested for loops. The outer loop selects the first element, and the inner loop selects the second element. If their sum equals the target, the function returns their indices.

### Complexity

- Time: O(n²)
- Space: O(1) auxiliary space

### Notes

- Used malloc() to dynamically allocate memory for the result.
- Used two different indices to avoid using the same element twice.
- Learned how to return an array using pointers in C.
