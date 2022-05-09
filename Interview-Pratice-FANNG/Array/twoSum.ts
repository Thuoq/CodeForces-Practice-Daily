// Given an array of integer, return the indices of the two numbers that add up to a given target
//
// console.log('a');
function twoSum(numbers: number[], target: number) {
  const map = new Map<number, number>();
  for (let idx = 0; idx < numbers.length; idx++) {
    if (map.has(numbers[idx])) {
      return [idx, map.get(numbers[idx])];
    } else {
      const findNumber = target - numbers[idx];
      map.set(findNumber, idx);
    }
  }
  return [];
}
const found = twoSum([2, 7, 11, 15], 9);
console.log(found);
