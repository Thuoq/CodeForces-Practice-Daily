/**
 * Problem: Cho bạn 1 cái cây, trả về level order khi bạn đi qua cái câu đó
 * như 1 array ví dụ:
 *           2
 *        1     3
 * return [[2],[1,3]]
 */
 const findListLevelOrder =  (root) =>  {
    let currentNode = root;
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
    return list_numbers_level;
    
}