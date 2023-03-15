function maxArea(numbers: number[]): number {
  let maxArea = 0;
  let left = 0 ;
  let right = numbers.length -1;
  while (left < right) {
    const _area = Math.min(numbers[left],numbers[right]) * (right-left)
    maxArea = Math.max(_area,maxArea)
    if(numbers[left] < numbers[right]) {
      left ++
    }else {
      right --
    }
  }
  return maxArea
}

console.log(maxArea([1,8,6,2,5,4,8,3,7]));