type Queue = {
  priority: number;
  value: number;
};
class PriorityQueue {
  // api
  queue: Queue[];
  constructor() {
    this.queue = [];
  }
  isEmpty() {
    return this.size() === 0;
  }
  top() {
    if (this.isEmpty()) {
      throw new Error("Queue is empty");
    }
    return this.queue[0].value;
  }
  peek() {
    if (this.isEmpty()) {
      throw new Error("Queue is empty");
    }
    return this.queue.splice(1);
  }
  size() {
    return this.queue.length;
  }
  // FIFO
  insert(value: number, priority: number) {}
  // Remove
  remove(value: number) {}
  // Update
  update(value: number, newPriority: number) {}
}
