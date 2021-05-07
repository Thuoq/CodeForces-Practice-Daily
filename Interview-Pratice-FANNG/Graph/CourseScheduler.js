/**
 * @param {number} numCourses
 * @param {number[][]} prerequisites
 * @return {boolean}
 */
var p = [
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
// console.log(canFinish(6,p))
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
var canFinishTopological = function (numCourses, prerequisites) {
    const adjList = new Array(numCourses).fill(0).map(() => []);
    let inDegree = new Array(numCourses).fill(0).map(() => 0);
    let sum = 0;

    for (let i = 0; i < prerequisites.length; i++) {
        let connect = prerequisites[i];
        inDegree[connect[0]] ++;
        sum ++;
        adjList[prerequisites[i][1]].push(prerequisites[i][0])
    }
    while (sum) {
        // find the number inDegree = 0
        let position=Infinity;
        for(let i  = 0 ; i < inDegree.length ; i++) {
            if (inDegree[i] == 0) {
                position = i;
            }  
        }

     
        if(position == Infinity){
            return false
        }
        inDegree[position] --;
        for(let i = 0 ; i < adjList[position].length; i++) {
            inDegree[adjList[position][i]] --;
            sum--;
        }
        
       
      
    }
    return true
    
};
var p = [
    [1, 0],
    [2, 1],
    [2, 5],
    [0, 3],
    [4, 3],
    [3, 5],
    [4, 5]
]
console.log(canFinishTopological(6, p))
 const p = [
     [1, 0],
     [2, 1],
     [2, 5],
     [0, 3],
     [4, 3],
     [3, 5],
     [4, 5]
 ]
var betterSolution = (numCourses, prerequisites) =>  {
    const adjList = new Array(numCourses).fill(0).map(() => []);
    let inDegree = new Array(numCourses).fill(0);
    for(let i = 0 ; i < prerequisites.length ; i ++) {
        let connect = prerequisites[i];
        inDegree[connect[0]]++;
        adjList[prerequisites[i][1]].push(prerequisites[i][0])
    }
    let stack = [];
    for (let i = 0; i < inDegree.length; i++) {
        if(inDegree[i] === 0) {
            stack.push(i)
        }
    }
    let count = 0;
    while(stack.length) {
        let current = stack.pop();
        count ++;
        let connect = adjList[current];
        for (let i = 0; i <  connect.length; i++) {
            inDegree[connect[i]] --;
            if (inDegree[connect[i]] === 0) {
                stack.push(connect[i])
            }
        }
    }
    return count == numCourses
}
var canFinish = function (n, prerequisites) {
     const inDegree = new Array(n).fill(0);

     for (let i = 0; i < prerequisites.length; i++) {
         inDegree[prerequisites[i][0]]++;
     }

     const stack = [];

     for (let i = 0; i < inDegree.length; i++) {
         if (inDegree[i] === 0) {
             stack.push(i);
         }
     }

     let count = 0;

     while (stack.length) {
         const current = stack.pop();
         count++;

         for (let i = 0; i < prerequisites.length; i++) {
             const pair = prerequisites[i];
             if (pair[1] === current) {
                 inDegree[pair[0]]--;
                 if (inDegree[pair[0]] === 0) {
                     stack.push(pair[0]);
                 }
             }
         }
     }

     return count === n;
 };