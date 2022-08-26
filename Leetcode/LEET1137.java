class Solution {
    public int tribonacci(int n) {
        if (n == 0) return 0;
        int x = 0, y = 0, z = 1;
        for (int i = 3; i <= n; i++) {
            int p = x + y + z;
            x = y;
            y = z; 
            z = p;
        }
        return x + y + z;
    }
}