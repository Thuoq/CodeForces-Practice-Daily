/**
 * @param {number} numCourses
 * @param {number[][]} prerequisites
 * @return {boolean}
 */
const p = [
    [1, 0],
    [2, 1],
    [2, 5],
    [0, 3],
    [4, 3],
    [3, 5],
    [4, 5]
]
// RUN BY DFS
var canFinish = function (numCourses, prerequisites) {
    const adjList = new Array(numCourses).fill(0).map(() => []);
 
    for (let i = 0; i < prerequisites.length; i++) {
        // console.log(prerequisites[i])
        adjList[prerequisites[i][1]].push(prerequisites[i][0])
    }

    for(let vertex = 0 ; vertex < numCourses ; vertex ++) {
        let queue = [...adjList[vertex]]
        let seen = {}
        while(queue.length) {
            let currentVer = queue.shift()

            seen[currentVer] == true;
            if(currentVer === vertex) {
           
                return false;
            }
            const adjacent = adjList[currentVer];
            for (let nextVer = 0; nextVer < adjacent.length; nextVer++) {
                if (!seen[adjacent[nextVer]]) {
                    queue.push(adjacent[nextVer]);
                }
            } 


        }
    }
    return true
};
console.log(canFinish(6,p))
// Test 2

// canFinish(7,
//     [[0,3],
//     [1,0],
//     [2,1],
//     [4,5],
//     [6,4],
//     [5,6]])

// DFS
var canFinish = function (numCourses, prerequisites) {
    const adjList = new Array(numCourses).fill(0).map(() => []);

    for (let i = 0; i < prerequisites.length; i++) {
        // console.log(prerequisites[i])
        adjList[prerequisites[i][1]].push(prerequisites[i][0])
    }
    for(let v = 0 ; v < numCourses ; v++) {
        let seen = {}
        dfs(adjList, seen, v)
    }
    // for (let vertex = 0; vertex < numCourses; vertex++) {
    //     let queue = [...adjList[vertex]]
    //     let seen = {}
    //     while (queue.length) {
    //         let currentVer = queue.shift()

    //         seen[currentVer] == true;
    //         if (currentVer === vertex) {

    //             return false;
    //         }
    //         const adjacent = adjList[currentVer];
    //         for (let nextVer = 0; nextVer < adjacent.length; nextVer++) {
    //             if (!seen[adjacent[nextVer]]) {
    //                 queue.push(adjacent[nextVer]);
    //             }
    //         }


    //     }
    // }
    return true
};

// TOPOLOGICAL SORT
