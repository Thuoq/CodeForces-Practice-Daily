const adjacencyList = require('./AdjacencyList')


const BFS = (adjacencyList) => {
    const explored = {}
    const values =[]
    const queue = [0]
    while(queue.length) {
        let vertex = queue.shift()
        explored[vertex] = true;
        values.push(vertex)
        const connections = adjacencyList[vertex]
        for (let i = 0; i < connections.length; i++) {
            if (!explored[connections[i]]) {
                queue.push(connections[i])
            }
        }
    }
    return values
    
}
console.log(BFS(adjacencyList))