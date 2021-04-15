class QueueWithStacks {
    in:number[];
    out: number[]; 
    constructor() {
        this.in = [];
        this.out = [];
    }
    // QUEUE first In First Out 
    // 1 2 3 4 5
    enqueue(val:number) {
        this.in.push(val)
    }
    dequeue() {
        if(this.out.length === 0) {
            while(this.in.length) {
                this.out.push(this.in[this.in.length -1]);
                this.in.length --;
            }
            
        }
        return this.out.pop();
    }
    empty() {
        return !this.in.length && !this.out.length
    }
    peek() {
        if (this.out.length === 0) {
            while (this.in.length) {
                this.out.push(this.in[this.in.length - 1]);
                this.in.length--;
            }

        }
        return this.out[this.out.length - 1];
    }
}

