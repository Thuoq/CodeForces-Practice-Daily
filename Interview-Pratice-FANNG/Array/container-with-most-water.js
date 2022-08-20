/**
 * You are give an array of positive integers where 
 * each integer represents the height of vertical line on a
 * chart. Find two lines which together with x-axis from a container that
 * would hold the greatest amount of water . Return the area of water it would hold.
 */

/**
 * Calculator: S = min(arr[i], arr[j]) * abs(i-j)
 * sao cho S_max;  (x*y)_max 
 * 
 */ //x  x         y  => S  // 1 vong while
const test_case = [7, 1, 2, 3, 9] // = min(7,9) * (4-0) = 28

function calculatorArea(arr, left, right) {
  return Math.abs(right - left) * Math.min(arr[left], arr[right])
}
const maxWater = (arr) => {
  let left = 0;
  let right = arr.length - 1;
  let area = Number.NEGATIVE_INFINITY
  while (left != right) {
    area = Math.max(area, calculatorArea(arr, left, right))
    if (arr[left] < arr[right]) {
      left++;
    } else {
      right--
    }
  }
  return area;
}
console.log(maxWater(test_case))