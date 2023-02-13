export function solve(nums: number[]) {
  const FIRST_INDEX = 0;
  const SECOND_INDEX = 1;
  const length = nums.length;

  if (length === 1) {
    return "YES";
  }
  // nums:  [2,2,3,3]
  const left = [FIRST_INDEX, SECOND_INDEX];
  const right = [length - 1, length - 2];
  while (left[SECOND_INDEX] <= right[SECOND_INDEX]) {
    if (nums[left[FIRST_INDEX]] >= nums[left[SECOND_INDEX]]) {
      return "YES";
    } else {
      left[FIRST_INDEX]++;
      left[SECOND_INDEX]++;
    }
    if (nums[right[SECOND_INDEX]] <= nums[right[FIRST_INDEX]]) {
      return "YES";
    } else {
      right[FIRST_INDEX]--;
      right[SECOND_INDEX]--;
    }
  }
  return "NO";
}

console.log(solve([3, 2, 2, 1, 2, 2, 3]));
console.log(solve([1, 1, 1, 2, 3, 3, 4, 5, 6, 6, 6]));
console.log(solve([1, 2, 3, 4, 3, 2, 1]));
console.log(solve([9, 7, 4, 6, 9, 9, 10]));
console.log(solve([1000000000]));
console.log(solve([9, 4, 4, 5, 9, 4, 9, 10]));
