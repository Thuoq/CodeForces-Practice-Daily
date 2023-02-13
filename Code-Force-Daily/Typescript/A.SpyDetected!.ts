export function solve(numbers: number[]) {
  const obj = new Map<
    number,
    {
      count: number;
      index: number;
    }
  >();
  for (let index = 0; index < numbers.length; index++) {
    const element = numbers[index];
    let value = obj.get(element);
    if (value) {
      obj.set(element, {
        count: ++value.count,
        index: value.index,
      });
    } else {
      obj.set(element, {
        count: 1,
        index,
      });
    }
  }
  let min = Number.MAX_SAFE_INTEGER;
  let result = Number.MIN_SAFE_INTEGER;
  for (let [_, { count, index }] of obj) {
    if (min > count) {
      min = count;
      result = index;
    }
  }
  return result + 1;
}

console.log(solve([11, 13, 11, 11]));
console.log(solve([1, 4, 4, 4, 4]));
console.log(solve([3, 3, 3, 3, 10, 3, 3, 3, 3, 3]));
console.log(solve([20, 20, 10]));
