const findCycle  = (head) => {
    let hare = head,tortoise= head;
    while(true) {
        hare = hare.next;
        tortoise = tortoise.next
        if(hare === null || hare.next === null) {
            return false
        }else {
            hare = hare.next
        }
        if(hare === tortoise) break;
    }
    let p1 = head,p2 = tortoise;

    while(p1 !== p2) {
        p1 = p1.next;
        p2 = p2.next;
    }
    return p1;
}
// Time: O(n) and Space O(1)