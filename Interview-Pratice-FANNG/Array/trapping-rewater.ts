/**
 * Give an array of integer representing an elevation map
 * where the width of each bar is 1, return how much rainwater
 * can be trapped
 */
// Prove the math: currentWater = min(maxLeft,maxRight) - currentHeight
// Test Case [0,1,0,2,1,0,3,1,0,1,2]
// OUTPUT:8

const Solution = (height:number[]):number => {
    let result = 0
    let left = 0;
    let right = height.length -1;
    let maxLeft = 0;
    let maxRight = 0;
    while(left < right) {
        if (height[left] <= height[right]) {
            if(height[left] >= maxLeft) {
                maxLeft = height[left]
            }else {
                result += maxLeft - height[left]
            }
            left ++;
        }else {
            if (height[right] >= maxRight) {
                maxRight = height[right]
            } else {
                result += maxRight - height[right]
            }
            right--;
        }
    }
    return result
}
console.log(Solution([0, 1, 0, 2, 1, 0, 3, 1, 0, 1, 2]))