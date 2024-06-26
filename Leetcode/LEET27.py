from typing import List


def removeElement(nums: List[int], val: int) -> int:
    non_eq_len = 0
    for num in nums:
        if num != val:
            nums[non_eq_len] = num
            non_eq_len += 1
    return non_eq_len


if __name__ == '__main__':
    array = [3, 2, 2, 3]
    k = removeElement(array, 3)
    print(k, array)
