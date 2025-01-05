from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return strs[0]
        result = ""
        for i in range(len(strs[0])):
            result = strs[0][:i+1]
            for j in range(1, len(strs)):
                if result != strs[j][:i+1]:
                    return result[:i]
        return result

if __name__ == "__main__":
    solution = Solution()
    print(solution.longestCommonPrefix(["flower", "flow", "flight"]))  # "fl"
    print(solution.longestCommonPrefix(["dog", "racecar", "car"]))  # ""
    print(solution.longestCommonPrefix(["a"]))  # "a"
    print(solution.longestCommonPrefix(["a", "b"]))  # ""
    print(solution.longestCommonPrefix([""])) # ""