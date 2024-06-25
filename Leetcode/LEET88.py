from typing import List


def merge(nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    """
    Do not return anything, modify nums1 in-place instead.
    """
    if n == 0:
        return
    temp_nums = nums1[:m]
    left = 0
    right = 0
    merge_index = 0
    nums1_len = len(nums1)
    while merge_index < nums1_len and left < m and right < n:
        if temp_nums[left] <= nums2[right]:
            nums1[merge_index] = temp_nums[left]
            left += 1
        else:
            nums1[merge_index] = nums2[right]
            right += 1
        merge_index += 1
    while left < m and temp_nums[left] != 0:
        nums1[merge_index] = temp_nums[left]
        left += 1
        merge_index += 1
    while right < n and nums1_len:
        nums1[merge_index] = nums2[right]
        right += 1
        merge_index += 1

    # Another Approach
    # for i in range(n):
    #     nums1[m + i] = nums2[i]
    # nums1.sort()


if __name__ == '__main__':
    arr1 = [4, 0, 0, 0, 0, 0]
    arr2 = [1, 2, 3, 5, 6]
    merge(arr1, 1, arr2, 5)
    print(arr1)
