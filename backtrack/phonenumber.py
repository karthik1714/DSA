from typing import List

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        # Return an empty list if the input is empty
        if digits == "":
            return []
        
        # Resultant list to store the combinations
        res = []
        # Temporary list to store the current combination being formed
        sol = []
        
        # Map of digits to their respective letters
        phone_map = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        
        # Helper function for backtracking
        def backtrack(i):
            if len(sol) == len(digits):
                res.append(''.join(sol))
                return
            
            for c in phone_map[digits[i]]:
                sol.append(c)       # Choose a letter
                backtrack(i + 1)    # Recur to the next digit
                sol.pop()           # Undo the choice (backtrack)
        
        # Start the backtracking process from the first digit
        backtrack(0)
        return res

# Test cases
solution = Solution()

# Example 1
digits1 = "23"
output1 = solution.letterCombinations(digits1)
print(output1)