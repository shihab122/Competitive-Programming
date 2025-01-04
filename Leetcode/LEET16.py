class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        symbol_map = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        for first, second in zip(s, s[1:]):
            if symbol_map[second] > symbol_map[first]:
                result -= symbol_map[first]
            else:
                result += symbol_map[first]
        result += symbol_map[s[-1]]
        return result
            
        
if __name__ == "__main__":
    solution = Solution()
    print(solution.romanToInt("III")) # 3
    print(solution.romanToInt("LVIII")) # 58
    print(solution.romanToInt("MCMXCIV")) # 1994