# Leetcode Problem 342. Power of Four 
 342. Power of Four ( Using C++ ) with recursion and without recursion
# Intuition
    The goal is to determine whether a given number is a power of four. One approach is to repeatedly multiply a variable (ans) by 4 until it matches the input number or exceeds it.

# Approach
    The code initializes a variable ans to 1 and iterates through a loop 16 times (from 0 to 15). In each iteration, it checks whether n is equal to ans. If they are equal, the function returns true, indicating that n is a power of four. If ans is less than INT_MAX/4, it multiplies ans by 4 in each iteration. The loop continues until either n is found to be a power of four or the loop completes without finding a match.

# Complexity

# Time complexity:
    Time complexity: O(1) - The loop runs a constant number of times (16 times) regardless of the input, so the time complexity is constant.
    
# Space complexity:
    Space complexity: O(1) - The algorithm uses a constant amount of space (only the integer variable ans), and the space complexity does not depend on the input size.
