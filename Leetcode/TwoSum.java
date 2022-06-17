import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int startIndex = -1, endIndex = -1;
        List<Integer> numsList = IntStream.of(nums).boxed().collect(Collectors.toList());
        for (int i = 0; i < nums.length; i++) {
            endIndex = numsList.lastIndexOf(target - nums[i]);
            if (endIndex != -1 && endIndex != i) {
                startIndex = i;
                break;
            }
        }
        return new int[]{startIndex, endIndex};
    }
}