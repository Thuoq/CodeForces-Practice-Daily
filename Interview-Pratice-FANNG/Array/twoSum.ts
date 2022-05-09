// Given an array of integer, return the indices of the two numbers that add up to a given target
//
function twoSum(numbers: number[], target: number) {
  const map = new Map<number, number>();
  for (let idx = 0; idx < numbers.length; idx++) {
    if (map.get(numbers[idx])) {
      return [idx, map.get(numbers[idx])];
    } else {
      const findNumber = target - numbers[idx];
      map.set(findNumber, idx);
    }
  }
  return null;
}
const found = twoSum([1, 3, 7, 9, 2], 11);
console.log(found);
