"use strict";
exports.__esModule = true;
exports.solve = void 0;
function solve(numbers) {
    var obj = new Map();
    for (var index = 0; index < numbers.length; index++) {
        var element = numbers[index];
        var value = obj.get(element);
        if (value) {
            obj.set(element, {
                count: ++value.count,
                index: value.index
            });
        }
        else {
            obj.set(element, {
                count: 1,
                index: index
            });
        }
    }
    var min = Number.MAX_SAFE_INTEGER;
    var result = Number.MIN_SAFE_INTEGER;
    for (var _i = 0, obj_1 = obj; _i < obj_1.length; _i++) {
        var _a = obj_1[_i], _ = _a[0], _b = _a[1], count = _b.count, index = _b.index;
        if (min > count) {
            min = count;
            result = index;
        }
    }
    return result + 1;
}
exports.solve = solve;
console.log(solve([11, 13, 11, 11]));
console.log(solve([1, 4, 4, 4, 4]));
console.log(solve([3, 3, 3, 3, 10, 3, 3, 3, 3, 3]));
console.log(solve([20, 20, 10]));
