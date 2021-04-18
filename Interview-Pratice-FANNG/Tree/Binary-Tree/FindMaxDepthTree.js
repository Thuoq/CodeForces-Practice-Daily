// Link Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/

var maxDepth = function(root,currentDepth=0) {
    if(root === null) {
        return currentDepth
    }
    currentDepth ++;
    return Math.max(maxDepth(root.left, currentDepth),maxDepth(root.right,currentDepth))
}