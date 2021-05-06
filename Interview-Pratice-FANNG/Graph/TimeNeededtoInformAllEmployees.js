// Link Problem:https://leetcode.com/problems/time-needed-to-inform-all-employees/
/**
 * @param {number} n
 * @param {number} headID
 * @param {number[]} manager
 * @param {number[]} informTime
 * @return {number}
 */
var numOfMinutes = function (n, headID, manager, informTime) {
    // Bước 1 Tính Ra được AdjacencyMatrix
        //: Cha của thằng giá trị và thằng index trong array
    const adjacencyMatrix = manager.map(() => [])
    
    for(let i = 0; i < n ; i ++) {
        if(manager[i] !== -1) {
       
            adjacencyMatrix[manager[i]].push(i)
        }
    }

    // console.log(adjacencyMatrix[2].push(3))
    // Bước 2 Dùng BFS or DFS tính các cây rồi tìm max

    
    return dfs(adjacencyMatrix, informTime, headID)
 
};
function dfs(graph, informTime, currentID) {
    if (!graph[currentID].length) return 0;
    let max = 0
    const subordinates = graph[currentID]
    for (let i = 0; i < subordinates.length; i++) {
       // Run for the first level in the top 
        max = Math.max(max, dfs(graph, informTime, subordinates[i]))
        
    }
    return max + informTime[currentID]
}
console.log(numOfMinutes(8,4,[2,2,4,6,-1,4,4,5],[0,0,4,0,7,3,6,0]))