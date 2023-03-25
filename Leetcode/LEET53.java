class Solution {
    public int maxSubArray(int[] nums) {
        int len = nums.length;
        int mx = nums[0];
        int[] sum = new int[len];
        for (int i = 0; i < len; i++) {
            if (i == 0) sum[i] = nums[i];
            else sum[i] = Math.max(sum[i - 1] + nums[i], nums[i]);
            mx = Math.max(mx, sum[i]);
        }   
        return mx;
    }
}