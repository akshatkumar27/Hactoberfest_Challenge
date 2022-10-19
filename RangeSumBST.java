//->Given the root node of a binary search tree and two integers low and high, return the sum of values of all nodes with a value in the inclusive range [low, high].
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    int sum = 0;
    
    public int rangeSumBST(TreeNode root, int low, int high) {
        
        //when root is null return -1
        if(root==null) return -1;
        
        //case1: low<= root <=high : range can be found on either left or right subtree
        if(root.val>=low && root.val<=high)
        {
            rangeSumBST(root.left,low,high);
            sum += root.val;
            rangeSumBST(root.right,low,high);
        }
        //case2: root<=low : range can be found only on right subtree
        else if(root.val<=low)
        {
            rangeSumBST(root.right,low,high);
        }
        else //case3: root >=high : range can be found only on left subtree
        {
            rangeSumBST(root.left,low,high);
        }
        
        return sum;
        
    }
}
