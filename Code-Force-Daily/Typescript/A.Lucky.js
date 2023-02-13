function solve(nums) {
    var n = nums.length;
    var leftArr = nums.slice(0, 3);
    var rightArr = nums.slice(3, n);
    if (sum(leftArr) === sum(rightArr)) {
        console.log("YES");
        return;
    }
    console.log("NO");
}
function sum(num) {
    return num.reduce(function (sum, val) { return sum + val; }, 0);
}
