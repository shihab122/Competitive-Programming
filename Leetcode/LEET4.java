class Solution {
    public int[] selectionSort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                if (array[i] > array[j]) {
                    array[i] = array[i] + array[j];
                    array[j] = array[i] - array[j];
                    array[i] = array[i] - array[j];
                }
            }
        }
        return array;
    }
    
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] result = new int[nums1.length + nums2.length];
        System.arraycopy(nums1, 0, result, 0, nums1.length);
        System.arraycopy(nums2, 0, result, nums1.length, nums2.length);
        result = selectionSort(result);
        int mid1 = -1;
        int mid2 = result.length / 2;
        if (result.length % 2 == 0) mid1 = mid2 - 1;
        if (mid1 == -1) return Double.valueOf(result[mid2]);
        else return (Double.valueOf(result[mid1]) + Double.valueOf(result[mid2])) / 2.00;
    }
}
