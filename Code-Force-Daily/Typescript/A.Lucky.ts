function solve(nums: number[]) {
  const n = nums.length;
  const leftArr = nums.slice(0, 3);
  const rightArr = nums.slice(3, n);
  if (sum(leftArr) === sum(rightArr)) {
    console.log("YES");
    return;
  }
  console.log("NO");
}

function sum(num: number[]) {
  return num.reduce((sum, val) => sum + val, 0);
}

solve([2, 1, 3, 1, 3, 2]);
solve([9, 7, 3, 8, 9, 4]);
solve([0, 4, 5, 2, 0, 7]);
solve([0, 0, 0, 0, 0, 0]);
solve([0, 5, 5, 7, 7, 6]);
