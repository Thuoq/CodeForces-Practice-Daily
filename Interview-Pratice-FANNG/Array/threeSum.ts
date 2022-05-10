// Link Problem:https://leetcode.com/problems/3sum/

function checkExist(arrayDatabase: number[][], input: number[]): number {
  return arrayDatabase.findIndex((el) => {
    // console.log(el, input);
    return el.every((item) => input.includes(item));
  });
}
function threeSum(nums: number[]): number[][] {
  const numbersSorted = nums.sort();
  const result = [];
  for (let lp = 0; lp < numbersSorted.length - 1; lp++) {
    let start = lp + 1;
    let end = numbersSorted.length - 1;
    while (start < end) {
      const _sum =
        numbersSorted[start] + numbersSorted[end] + numbersSorted[lp];
      if (_sum == 0) {
        const inputData = [
          numbersSorted[start],
          numbersSorted[end],
          numbersSorted[lp],
        ].sort();
        if (checkExist(result, inputData) === -1) {
          result.push(inputData);
        }
        start++;
        end--;
      } else if (_sum < 0) {
        start++;
      } else {
        end--;
      }
    }
  }
  return result;
}

console.log(threeSum([-1, 0, 1, 2, -1, -4]));
