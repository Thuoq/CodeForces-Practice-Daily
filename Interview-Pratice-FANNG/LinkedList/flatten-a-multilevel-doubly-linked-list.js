// Link Problem : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list
const flatten = function (head) {
    if(!head) return head;
    let currentNode = head;
    while(currentNode !== null ) {
        if(currentNode.child === null) {
            currentNode = currentNode.next
        }else {
            let tail = currentNode.child
            while(tail.next !== null) {
                tail = tail.next
            }
            tail.next = currentNode.next
            if(tail.next !== null) {
                tail.next.prev = tail;
            }
            currentNode.next =  currentNode.child;
            currentNode.next.prev = currentNode;
            currentNode.child = null;

        }
    }
    return head
 
}