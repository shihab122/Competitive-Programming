import java.util.*;

class Solution {
    public int fib(int n) {
        List<Integer> result = new ArrayList();
        result.add(0);
        result.add(1);
        for (int i = 2; i <= n; i++) {
            result.add(result.get(i - 1) + result.get(i - 2));
        }
        return result.get(n);
    }
}
