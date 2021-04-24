const dfs_pre_order = (root,list) => {
    const currentNode = root;
    list.push(currentNode.value);
    if(currentNode.left) {
        dfs_pre_order(currentNode.left,list)
    }
    if(currentNode.right) {
        dfs_pre_order(currentNode.right, list)
    }
    return list;
}
const validationBinaryTree = (root) => {

}