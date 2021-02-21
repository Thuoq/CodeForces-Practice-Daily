function solution(numbs) {
    var obj = {};
    for (var i = 0; i < numbs.length; i++) {
        obj[numbs[i]] = i;
    }
    console.log(Math.max.apply(Math, numbs));
    return 1;
}
console.log(solution([1, 7, 8, 9, 10]));
