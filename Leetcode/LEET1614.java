class Solution {
    public int maxDepth(String s) {
        int maxDepth = 0, currentDepth = 0;
        for (char ch: s.toCharArray()) {
            if (ch == '(') currentDepth++;
            else if (ch == ')') currentDepth--;
            maxDepth = Math.max(currentDepth, maxDepth);
        }
        return maxDepth;
    }
}