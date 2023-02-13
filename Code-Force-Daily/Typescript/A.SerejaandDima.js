function solve(nums) {
    var length = nums.length;
    var numFirst = 0;
    var numSecond = 0;
    var left = 0;
    var right = length - 1;
    var index = 0;
    while (left <= right) {
        if (index % 2 === 0) {
            if (nums[left] > nums[right]) {
                numFirst += nums[left];
                left++;
            }
            else {
                numFirst += nums[right];
                right--;
            }
        }
        else {
            if (nums[left] > nums[right]) {
                numSecond += nums[left];
                left++;
            }
            else {
                numSecond += nums[right];
                right--;
            }
        }
        index++;
    }
    return [numFirst, numSecond].join(" ");
}
console.log(solve([4, 1, 2, 10]));
console.log(solve([1, 2, 3, 4, 5, 6, 7]));
