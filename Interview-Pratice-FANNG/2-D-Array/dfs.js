/**
 * -> row
 * 1  |  2
 * 1  |  3
 * |
 * |
 * column 
 */

const data = require('./data');
const directions = require('./directions')


function dfs(matrix,explore,row,column,values) {
    
    // Check if two max 
    if(row < 0   || column < 0  || row >= matrix.length || column >= matrix[0].length || explore[row][column]) return;
    values.push(matrix[row][column])
    explore[row][column] = true;
    for(let i = 0 ; i < directions.length ; i++) {
        
        dfs(matrix, explore, row + directions[i][0], column + directions[i][1], values)
    }
}
const traversalDFs  = (matrix) => {
    const explore = new Array(matrix.length).fill(0).map(el => new Array(matrix[0].length).fill(false))
    const values = []
    dfs(matrix,explore, 0, 0, values)
    return values
}
console.log(traversalDFs(data))
