const adjacencyList = require('./AdjacencyList')
function dfs(graph,values,seen,vertex) {
    // if(seen[vertex]) {
    //     return;
    // } ntn cung dc
    seen[vertex] = true;
    values.push(vertex)
    for (let i = 0; i < graph[vertex] ; i ++) {
        if(!seen[graph[vertex][i]]) {
            dfs(graph, values, seen, graph[vertex][i])
        }
    }
}
const traversalDFS = (graph) => {
    const values = []
    const seen = {}
    dfs(graph,values,seen,0)
    return values;
}
console.log(traversalDFS(adjacencyList))
