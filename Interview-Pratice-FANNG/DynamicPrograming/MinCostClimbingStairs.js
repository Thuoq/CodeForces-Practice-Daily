/**
 * @param {number[]} cost
 * @return {number}
 */
// THIS IS: TOP DOWN APPROACH
function minCost(i,cost,memorize) {
    if(i < 0) {
        return 0;
    }
    if(i === 0 || i === 1) {
        return cost[i]
    }
    if(memorize[i]) {
       return memorize[i]
    }
    memorize[i] = cost[i] + Math.min(minCost(i - 1, cost,memorize), minCost(i - 2, cost,memorize))
    return memorize[i]
}
var minCostClimbingStairs = function (cost) {
    const n = cost.length; 
    const memo = []
    return Math.min(minCost(n - 1, cost, memo), minCost(n - 2, cost, memo))
};

var minCostClimbingStairsBOTTOM_UP_OP = function (cost) {
    const n = cost.length;
    if (n === 0) return 0;
    if (n === 1) return cost[0];
    let dpOne = cost[0];
    let dpTwo = cost[1];
    for (let i = 2; i < n; i++) {
        const current = cost[i] + Math.min(dpOne, dpTwo);

        dpOne = dpTwo;
        dpTwo = current;
    }

    return Math.min(dpOne, dpTwo);
};
var minCostClimbingStairsBOTTOM_UP_OP = (cost) =>  {
    const n = cost.length;
    if (n === 0) return 0;
    if (n === 1) return cost[0];
    const memo = []
    for(let i = 0 ; i < n ; i ++) {
        if(i < 2) {
            memo[i] = cost[i]
        }else {
            memo[i] = cost[i] + Math.min(memo[i-1],memo[i-2])
        }
    }
    return Math.min(memo[n-1],memo[n-2])
}