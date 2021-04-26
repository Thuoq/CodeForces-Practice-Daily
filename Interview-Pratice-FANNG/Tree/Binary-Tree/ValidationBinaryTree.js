/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
const dfs_pre_order = (root, min, max) => {
    if (root.value <= min || root.value >= max) {
        return false;
    }
    if (root.left) {

        if (!dfs_pre_order(root.left, min, root.value)) {
            return false;
        }
    }
    if (root.right) {
        if (!dfs_pre_order(root.right, root.value, max)) {
            return false;
        }
    }
    return true;
}
var isValidBST = function (root) {
    if (!root) return true;
    return dfs_pre_order(root, -Infinity, Infinity)
};