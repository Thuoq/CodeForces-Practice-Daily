function solve(numbers) {
    var maxNumber = Math.max.apply(Math, numbers);
    var minNumber = Math.min.apply(Math, numbers);
    return maxNumber - minNumber;
}
console.log(solve([3, 4, 2, 4, 1, 2]));
console.log(solve([1000, 1002, 998]));
console.log(solve([12, 11]));
console.log(solve([4, 2, 1, 6, 2]));
