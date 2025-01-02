from typing import List
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = 0
        for num in nums:
            if index < 1 or num > nums[index - 1]:
                nums[index] = num
                index += 1
        return index

if __name__ == "__main__":
    solution = Solution()
    print(solution.removeDuplicates([1, 1, 2]))  # 2
    print(solution.removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]))  # 5