class Solution {
    public void setZeroes(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        int[][] arr = new int[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
                arr[i][j] = matrix[i][j];
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] == 0) {
                    helper(i, j, matrix);
                }
            }
        }
    }

    public void helper(int x, int y, int[][] matrix) {
        for (int i = 0; i < matrix.length; i++)
            matrix[i][y] = 0;
        for (int j = 0; j < matrix[0].length; j++)
            matrix[x][j] = 0;
    }
}