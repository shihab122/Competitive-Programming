from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        result = None
        count = 0
        for num in nums:
            if count == 0:
                result = num
            count += (1 if num == result else -1)
        return result

if __name__ == "__main__":
    solution = Solution()
    print(solution.majorityElement([3, 2, 3]))  # 3
    print(solution.majorityElement([2, 2, 1, 1, 1, 2, 2]))  # 2
    print(solution.majorityElement([1]))  # 1
    print(solution.majorityElement([1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]))  # 1