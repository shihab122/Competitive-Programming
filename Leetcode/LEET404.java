public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
 

class Solution {
    public int recur(TreeNode node, int sum) {
        if (node.left != null && node.left.left == null && node.left.right == null) sum += node.left.val;
        if (node.left != null) sum = recur(node.left, sum);
        if (node.right != null) sum = recur(node.right, sum);
        return sum;
    }
    
    public int sumOfLeftLeaves(TreeNode root) {
        return recur(root, 0);
    }
}