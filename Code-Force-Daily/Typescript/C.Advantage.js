var __spreadArray = (this && this.__spreadArray) || function (to, from, pack) {
    if (pack || arguments.length === 2) for (var i = 0, l = from.length, ar; i < l; i++) {
        if (ar || !(i in from)) {
            if (!ar) ar = Array.prototype.slice.call(from, 0, i);
            ar[i] = from[i];
        }
    }
    return to.concat(ar || Array.prototype.slice.call(from));
};
function solve(nums) {
    var sorted = __spreadArray([], nums, true).sort(function (a, b) { return b - a; });
    var max = sorted[0];
    var maxSeconds = sorted[1];
    return nums.map(function (num) {
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
