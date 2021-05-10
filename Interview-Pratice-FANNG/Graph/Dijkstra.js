const PriorityQueue = require('./Priority-Queue');
const times = [[1,2,9],[1,4,2],[2,5,1],[4,2,4],[4,5,6],[3,2,3],[5,3,7],[3,1,5]]
const K =1 
const N = 5;
const networkDelayTime = (times,N,k) =>{
    // Times >=1 (vertex >=1 )
    // Init distances Infinity   

    const distance = new Array(N).fill(Infinity);
    
    // Init adjList
    const adjList = distance.map(() => [])
    // INIT FIRST START
    distance[k-1] = 0
    const heap = new PriorityQueue((a,b) => distance[a] < distance[b])
    heap.push(k-1)
    for(let i = 0 ; i < times.length ; i ++ ) {
        const src = times[i][0]
        const target = times[i][1]
        const weight = times[i][2]
        // -1 vi laf idx begin zero
        adjList[src-1].push([target-1,weight]);
    }
    while(!heap.isEmpty()) {
        // Get value min have priority queue
        const currentVertex = heap.pop()
        const adjacent = adjList[currentVertex];
        for (let i = 0 ; i < adjacent.length ; i ++) {
            const neighborsVertex = adjacent[i][0]
            const weight = adjacent[i][1]
            if( distance[currentVertex] + weight < distance[neighborsVertex]) {
                distance[neighborsVertex] = distance[currentVertex] + weight
                heap.push(neighborsVertex)
            }
        }
    }
    const ans = Math.max(...distance)
    return ans === Infinity ? -1 : ans
}
networkDelayTime(times,N,K);