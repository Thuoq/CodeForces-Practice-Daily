/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function (head, left, right) {
    let position_current = 1;
    let currentNode = head, start_node = head;
    while(position_current < left) {
        start_node = currentNode;
        currentNode = currentNode.next;
        position_current ++;
    }
    let newList = null,tail = currentNode;
    while(position_current >= left && position_current <= right) {
        const next = currentNode.next
        currentNode.next = newList
        newList = currentNode
        currentNode = next
        position_current ++;
    }
    start_node.next  = newList;
    tail.next = currentNode;
    return left > 1 ? head : newList
    // if(left === right) {
    //     return head
    // }
    // let position_currentNode = 1;
    // let start_reverse = null;
    // let tail_reverse = null;
    // let currentNode = head;
    // while (currentNode) {
    //     if(position_currentNode == left - 1) {
    //         start_reverse = currentNode;
    //     }else if (position_currentNode === left ) {
    //         tail_reverse = currentNode
    //         const list_so_far  = reverseList(currentNode,position_currentNode,right)
    //         start_reverse.next = list_so_far;
    //         tail_reverse.next = currentNode
    //         return currentNode;

    //     } else {
    //         currentNode = currentNode.next;
    //         position_currentNode +=1;
    //     }
    // }
   
};