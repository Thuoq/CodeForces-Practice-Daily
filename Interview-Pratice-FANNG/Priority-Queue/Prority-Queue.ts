type comparator = (a:number,b:number) => boolean;
class PriorityQueue{
    private comparator: comparator;
    private maxHeap:number[]
    constructor(comparator: comparator) {
        this.comparator = comparator;
        this.maxHeap = []
    }
    size() {
        return this.maxHeap.length;
    }
    isEmpty() {
        return this.maxHeap.length === 0;
    }
    peek() {
        return this.maxHeap[0]
    }
    private parent(idx:number) {
        return Math.floor((idx-1)/2)
    }
    private leftChild(idx:number) {
        return (idx * 2) + 1
    }
    private rightChild(idx:number) {
        return (idx*2)+2
    }
    private swap(idx1:number, idx2:number) {
        let hold  = this.maxHeap[idx1];
        this.maxHeap[idx1] = this.maxHeap[idx2];
        this.maxHeap[idx2] = hold; 
    }
    private compare(idx1: number,idx2:number) {
        return this.comparator(this.maxHeap[idx1],this.maxHeap[idx2])
    }

    // Pushing in max_heap
    push(value:number) {
        if(this.isEmpty()) return this.maxHeap.push(value);
        this.siftUp()
        return this.size();
    }
    private siftUp() {
        let nodeIdx = this.size()-1;
        while(nodeIdx > 0 && this.compare(nodeIdx,this.parent(nodeIdx))) {
            this.swap(nodeIdx,this.parent(nodeIdx))
            nodeIdx = this.parent(nodeIdx)
        }
    }
    pop() {
        if(this.isEmpty()) return null;
        if(this.size() === 1) return [];
        this.swap(this.maxHeap[0],this.maxHeap[this.size()-1]);
        const poppedValue = this.maxHeap.pop()
        this.siftDown();
        return poppedValue;
    }
    private siftDown() {
        let nodeIdx = 0;
        while(this.leftChild(nodeIdx) < this.size() &&
                this.compare(this.leftChild(nodeIdx),nodeIdx) ||
                this.rightChild(nodeIdx) < this.size() && 
                this.compare(this.rightChild(nodeIdx),nodeIdx)) {
                    const greaterNodeIdx = this.rightChild(nodeIdx) < this.size() && this.compare(this.leftChild(nodeIdx), this.rightChild(nodeIdx))
                    ? this.rightChild(nodeIdx)
                    : this.leftChild(nodeIdx)
                    this.swap(greaterNodeIdx,nodeIdx)
                    nodeIdx = greaterNodeIdx;
                }
    }
    displayHeap() {
        console.log(this.maxHeap)
    }
}
const max: comparator = (a:number,b:number) => a> b;

const prioryQueue = new PriorityQueue(max);
prioryQueue.push(29)
prioryQueue.push(40)
prioryQueue.push(200)
prioryQueue.displayHeap()