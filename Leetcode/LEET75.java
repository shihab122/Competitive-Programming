class Solution {
    public void sortColors(int[] nums) {
        int n = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 0) {
                swap(i, n, nums);
                n++;
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                swap(i, n, nums);
                n++;
            }
        }
    }

    public void swap(int i, int j, int[] nums) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}