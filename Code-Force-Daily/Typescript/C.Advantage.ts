function solve(nums: number[]) {
  const sorted = [...nums].sort((a, b) => b - a);
  const max = sorted[0];
  const maxSeconds = sorted[1];
  return nums.map((num) => {
    if (num === max) {
      return max - maxSeconds;
    }
    return num - max;
  });
}

console.log(solve([4, 7, 3, 5]));
console.log(solve([1, 2]));
console.log(solve([1, 2, 3, 4, 5]));
console.log(solve([4, 9, 4]));
console.log(solve([4, 4, 4, 4]));
