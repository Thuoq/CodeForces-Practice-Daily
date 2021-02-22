/**
 * You are give an array of positive integers where 
 * each integer represents the height of vertical line on a
 * chart. Find two lines which together with x-axis from a container that
 * would hold the greatest amount of water . Return the area of water it would hold.
 */

const test_case = [7, 1, 2, 3, 9]

function badSolution(numbers: number[]): number {
    let maxArea = 0;
    for (let i = 0; i < numbers.length; i++) {
        for (let j = i + 1; j < numbers.length; j++) {
            const area = Math.min(numbers[i], numbers[j]) * Math.abs(i - j)
            maxArea = Math.max(area, maxArea)
        }
    }
    return maxArea
}
console.log(badSolution(test_case))