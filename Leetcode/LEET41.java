import java.util.*;

class Solution {
    public int firstMissingPositive(int[] nums) {
        Map<Integer, Boolean> map = new HashMap();
        int mx = 1;
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], true);
            if (mx < nums[i]) mx = nums[i];
        }
        
        for (int i = 1; i <= 2147483647; i++) {
            if(!map.getOrDefault(i, false)) return i;
        }
        return 1;
    }
}