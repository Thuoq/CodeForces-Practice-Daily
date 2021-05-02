/**
 * -> row
 * 1  |  2
 * 1  |  3
 * |
 * |
 * column 
 */

const data = require('./data');

const directions = [
    [-1,0], // Up
    [0,1], // RIGHT
    [1,0], // DOWN
    [0,-1] // LEFT
]
const DFSTwoArray  = (matrix) => {
    const explore = new Array(matrix.length).fill(0).map(el => new Array(matrix[0].length).fill(false))
    
    console.warn(explore)
}
DFSTwoArray(data);

