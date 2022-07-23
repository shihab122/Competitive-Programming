class Solution {
    public int[] getDigits(int num) {
        int[] digits = new int[4];
        int i = 0;
        
        while(num > 0) {
            digits[i++] = num % 10;
            num /= 10;
        }
        return digits;
    }
    
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
    
    public int minimumSum(int num) {
        int[] digits = getDigits(num);
        digits = selectionSort(digits);
        int sum = (digits[0] * 10 + digits[2]) + (digits[1] * 10 + digits[3]);
        return sum;
    }
}