// Link problem: https://leetcode.com/problems/number-of-islands/
const  grid = [
     ["1", "1", "1", "1", "0"],
     ["1", "1", "0", "1", "0"],
     ["1", "1", "0", "0", "0"],
     ["0", "0", "0", "0", "0"]
 ]
const  grid2 = [
    ["1", "1", "0", "0", "0"],
    ["1", "1", "0", "0", "0"],
    ["0", "0", "1", "0", "0"],
    ["0", "0", "0", "1", "1"]
]
const directions = require('./directions')
var bfs = (matrix,row,col) => {
    const queue = [{row,col}]
    while(queue.length) {
        let currentPosition = queue.shift()
        let {row,col} = currentPosition;
        // Check
        if ( row < 0 || col < 0 ||col >= matrix[0].length || row >= matrix.length) {
            continue;
            
        }
        if(matrix[row][col]=== '1') {
            for(let i = 0 ; i < directions.length ; i ++) {
                matrix[row][col] = '0'
                queue.push({row : row + directions[i][0],
                            col: col + directions[i][1]})
    
            }
        }
     
        
    }
}
const numIslands = function (grid) {
    let count = 0;
    for(let i = 0  ; i < grid.length ;i ++) {
        for(let j = 0 ; j < grid[i].length ; j++) {
            if (grid[i][j] === '1') {
                count ++;
                bfs(grid, i, j);
            }
        }
    }
    return count;
};
console.log(numIslands(grid))