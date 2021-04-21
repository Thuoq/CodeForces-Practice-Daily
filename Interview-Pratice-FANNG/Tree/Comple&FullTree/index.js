/**
 * BFS works:
 *                   9
 *               6       12
 *             1   4   34  45
 * 
 * Traversal : Left to right by level: 9 -> 6 -> 12 -> 1 -> 4 -> 34 -> 45
 * 
 */
class Node {
    constructor(value) {
        this.left = null;
        this.right = null;
        this.value = value;
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null;
        this.bfs_stored = []
    }
    insert(value) {
        const newNode = new Node(value);
        if (this.root === null) {
            this.root = newNode;
        } else {
            let currentNode = this.root;
            while (true) {
                if (value < currentNode.value) {
                    //Left
                    if (!currentNode.left) {
                        currentNode.left = newNode;
                        return this;
                    }
                    currentNode = currentNode.left;
                } else {
                    //Right
                    if (!currentNode.right) {
                        currentNode.right = newNode;
                        return this;
                    }
                    currentNode = currentNode.right;
                }
            }
        }
    }
    lookup(value) {
        if (!this.root) {
            return false;
        }
        let currentNode = this.root;
        while (currentNode) {
            if (value < currentNode.value) {
                currentNode = currentNode.left;
            } else if (value > currentNode.value) {
                currentNode = currentNode.right;
            } else if (currentNode.value === value) {
                return currentNode;
            }
        }
        return null
    }
    remove(value) {
        if (!this.root) {
            return false;
        }
        let currentNode = this.root;
        let parentNode = null;
        while (currentNode) {
            if (value < currentNode.value) {
                parentNode = currentNode;
                currentNode = currentNode.left;
            } else if (value > currentNode.value) {
                parentNode = currentNode;
                currentNode = currentNode.right;
            } else if (currentNode.value === value) {
                //We have a match, get to work!

                //Option 1: No right child: 
                if (currentNode.right === null) {
                    if (parentNode === null) {
                        this.root = currentNode.left;
                    } else {

                        //if parent > current value, make current left child a child of parent
                        if (currentNode.value < parentNode.value) {
                            parentNode.left = currentNode.left;

                            //if parent < current value, make left child a right child of parent
                        } else if (currentNode.value > parentNode.value) {
                            parentNode.right = currentNode.left;
                        }
                    }

                    //Option 2: Right child which doesnt have a left child
                } else if (currentNode.right.left === null) {
                    currentNode.right.left = currentNode.left;
                    if (parentNode === null) {
                        this.root = currentNode.right;
                    } else {

                        //if parent > current, make right child of the left the parent
                        if (currentNode.value < parentNode.value) {
                            parentNode.left = currentNode.right;

                            //if parent < current, make right child a right child of the parent
                        } else if (currentNode.value > parentNode.value) {
                            parentNode.right = currentNode.right;
                        }
                    }

                    //Option 3: Right child that has a left child
                } else {

                    //find the Right child's left most child
                    let leftmost = currentNode.right.left;
                    let leftmostParent = currentNode.right;
                    while (leftmost.left !== null) {
                        leftmostParent = leftmost;
                        leftmost = leftmost.left;
                    }

                    //Parent's left subtree is now leftmost's right subtree
                    leftmostParent.left = leftmost.right;
                    leftmost.left = currentNode.left;
                    leftmost.right = currentNode.right;

                    if (parentNode === null) {
                        this.root = leftmost;
                    } else {
                        if (currentNode.value < parentNode.value) {
                            parentNode.left = leftmost;
                        } else if (currentNode.value > parentNode.value) {
                            parentNode.right = leftmost;
                        }
                    }
                }
                return true;
            }
        }
    }

    BFS() {
        let currentNode = this.root;
        let list_node_though = []
        let queue = []; // FIFO
        queue.push(currentNode)
        while (queue.length > 0) {
            currentNode = queue.shift()
            list_node_though.push(currentNode.value);
            if (currentNode.left) {
                queue.push(currentNode.left)
            }
            if (currentNode.right) {
                queue.push(currentNode.right)
            }
        }
        console.log(list_node_though)

    }
    DFSInOrder() {
        return this.traverseInOrder(this.root, [])

    }
    DFSPreOrder() {
        return this.traversePreOrder(this.root, [])
    }
    DFSPostOrder() {
        return this.traversePostOrder(this.root, [])
    }
    traverseInOrder(node, list) {

        if (node.left) {
            this.traverseInOrder(node.left, list)
        }
        list.push(node.value)
        if (node.right) {
            this.traverseInOrder(node.right, list)
        }
        return list;
    }
    traversePreOrder(node, list) {
        list.push(node.value)
        if (node.left) {
            this.traversePreOrder(node.left, list)
        }
        if (node.right) {
            this.traversePreOrder(node.right, list)
        }
        return list
    }
    traversePostOrder(node, list) {
        if (node.left) {
            this.traversePostOrder(node.left, list)
        }
        if (node.right) {
            this.traversePostOrder(node.right, list)
        }
        list.push(node.value)
        return list;
    }
    findListLevelOrder() {
        let currentNode = this.root;
        let queue = []; // FIFO
        queue.push(currentNode)
        // Keep track how when added
        let list_numbers_level = []
        while (queue.length > 0) {
            let length = queue.length,
                count = 0
            let currentLevelValues = []
            while (count < length) {
                currentNode = queue.shift()
                currentLevelValues.push(currentNode.value)
                if (currentNode.left) {
                    queue.push(currentNode.left)
                }
                if (currentNode.right) {
                    queue.push(currentNode.right)
                }
                count++;
            }
            list_numbers_level.push(currentLevelValues)
        }
        console.log(list_numbers_level)
    }
    rightSideTree() {
        let currentNode = this.root;
        let queue = []; // FIFO
        queue.push(currentNode)
        // Keep track how when added
        let right_side_node = []
        while (queue.length > 0) {
            let length = queue.length,
                count = 0
            while (count < length) {
                currentNode = queue.shift()
                if (currentNode.left) {
                    queue.push(currentNode.left)
                }
                if (currentNode.right) {
                    queue.push(currentNode.right)
                }
                if (count == length - 1) {
                    right_side_node.push(currentNode.value)
                }
                count++;
            }

        }
        console.log(right_side_node)
    }
    countNumberOfNodesWithCompleteTree() {
        let height = 0;
        let currentNode = this.root;
        while(currentNode.left) {
            currentNode = currentNode.left
            height ++;
        }
        console.log(height)
        
    }
}

const tree = new BinarySearchTree();
tree.insert(9)
tree.insert(4)
tree.insert(6)
tree.insert(20)
tree.insert(170)
tree.insert(15)
tree.insert(29)
tree.insert(1)
// // tree.remove(170)
// tree.findListLevelOrder()
// // console.log(tree.DFSInOrder())
// // console.log(tree.DFSPreOrder())
// // console.log(tree.DFSPostOrder())
// tree.rightSideTree()
// // JSON.stringify(traverse(tree.root))
tree.countNumberOfNodesWithCompleteTree()
// //     9
// //  4     20
// //1  6  15  170

// function traverse(node) {
//     const tree = {
//         value: node.value
//     };
//     tree.left = node.left === null ? null : traverse(node.left);
//     tree.right = node.right === null ? null : traverse(node.right);
//     return tree;
// }

