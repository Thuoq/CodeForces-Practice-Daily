const data = require('./data')
const directions = require('./directions')

// function BFS(matrix, row, column, values, explored,queue) {
//      // Check if two max 
//     if (row < 0 || column < 0 || row >= matrix.length || column >= matrix[0].length || explored[row][column]) return;
//     explored[row][column] = true;
//     values.push(matrix[row][column])
//     queue.push({row,column})
//     while(queue.length) {
//         let val = queue.shift()
//         for(let i = 0 ;i < directions.length ; i ++) {
//             BFS(matrix,val.row + directions[i][0], val.column +directions[i][1],values,explored,queue)
//         }
//     }

// }

const BFS_2_D_Array = (matrix) => {
    const explored = new Array(matrix.length).fill(0).map(el => new Array(matrix[0].length).fill(false))
    const values = []
    const queue = []
    queue.push({row:2,column:2})
    while(queue.length) {
        let firstQueue = queue.shift()
        let {row,column} = firstQueue
        if (row < 0 || column < 0 || row >= matrix.length || column >= matrix[0].length || explored[row][column]) {
            continue;
        }

        explored[row][column] = true;
        values.push(matrix[row][column])
        for(let i = 0 ; i < directions.length ;  i ++) {
            queue.push({row: row+directions[i][0],
                        column: column + directions[i][1]})
        }
    }
    return values
    
}
console.log(BFS_2_D_Array(data))