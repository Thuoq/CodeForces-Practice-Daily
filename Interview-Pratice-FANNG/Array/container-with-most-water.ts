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
// Time : O(n^2)
// Space: O(1)
//console.log(badSolution(test_case))

function goodSolution(numbers: number[]): number {
    let maxArea = 0;
    let i = 0
    let j = numbers.length - 1;
    while (i != j) {
        const area = Math.min(numbers[i], numbers[j]) * Math.abs(i - j)
        console.log(numbers[i], numbers[j], area)
        maxArea = Math.max(area, maxArea)
        if (numbers[i] < numbers[j]) {
            i++
        } else {
            j--
        }
    }

    return maxArea
}

// Two pointer strategies
console.log(goodSolution([1, 4, 5, 9]))