const grid = [
    [2, 1, 1],
    [1, 1, 0],
    [0, 1, 1]
]
const directions = require('./directions')

/**
 * @param {number[][]} grid
 * @return {number}
 */
var orangesRotting = function (grid) {
    // Find Fresh Orange and find Rotten Orange
    if (grid.length === 0) return 0;
    let amountOfFreshOrange = 0;
    let queue= []
    let minute = 0
    for(let i = 0 ; i < grid.length; i ++) {
        for(let j  = 0 ; j <grid[i].length ; j ++) {
            if(grid[i][j] === 2) {
                queue.push({
                    row: i,
                    col:j
                })
            }else if (grid[i][j] === 1) {
                amountOfFreshOrange++;
            }
        }
    }
    // BFS handle 
    let currentLengthQueue = queue.length;
    while(queue.length) {
        
        while (currentLengthQueue) {
            let currentQueue = queue.shift()
            let {row,col} = currentQueue;
            
            for(let i = 0 ; i < directions.length ; i ++) {
                
                const newRow =  row + directions[i][0];
                const newCol = col + directions[i][1]; 
                if (  newRow < 0 || newCol < 0 || newRow >= grid.length || newCol >= grid[0].length) {
                    continue;
                }
                console.log(newRow, newCol)
                if (grid[newRow][newCol] ===1) {
                    grid[newRow][newCol] = 2
                    queue.push({
                        col: newCol,
                        row: newRow
                    })
                    amountOfFreshOrange--;
                }
                
            }
            console.log('===========', minute)
            currentLengthQueue--;
        }
        
        currentLengthQueue = queue.length;
        if(queue.length !==0) {
            minute++;
        }
    }
    if (amountOfFreshOrange!= 0) {
        return -1;
    }
    return minute;

};
console.log(orangesRotting(grid))