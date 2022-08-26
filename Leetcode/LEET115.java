import java.util.*;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList(new ArrayList());
        result.add(Arrays.asList(1));
        for (int i = 1; i < numRows; i++) {
            List<Integer> subResult = new ArrayList();
            subResult.add(1);
            for (int j = 1; j < i; j++) {
                subResult.add(result.get(i - 1).get(j) + result.get(i - 1).get(j - 1));
            }
            subResult.add(1);
            result.add(subResult);
        }
        return result;
    }
}