/*
NOTE: The beginning portion builds our test case linked list. Scroll down to the section titled Our Solution for the code solution!
 */
/*
NOTE: The beginning portion builds our test case linked list. Scroll down to the section titled Our Solution for the code solution!
 */
interface Node {
    val:number,
    next : Node 
}

class ListNode <T> {
    val:number;
    next: T;
    constructor(val:number, next: T) {
        this.val = val;
        this.next = next;
    }
}
// ---- Generate our linked list ----
const linkedList = [5, 4, 3, 2, 1].reduce((acc:any, val) => new ListNode(val, acc), null);

const reverseList = function (head:Node) {
    let currentNode = head
    let prev: any = null
    while(currentNode) {
        let nextTemp = currentNode.next
        currentNode.next = prev;
        prev = currentNode;
        currentNode = nextTemp;
    }
    return prev
};

// ---- Generate our linked list ----

const printList = (head:Node|null) => {
    if (!head) {
        return;
    }

    console.log(head.val);
    printList(head.next);
}

// console.log(printList(linkedList))
console.log(reverseList(linkedList))