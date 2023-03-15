

const IS_VALLEY = 0;
function trap(height: number[]): number {
  let valleyIdx = 0;
  let leftMountainIdx = -1;
  let rightMountainIdx = -1;
  let result = 0;
  for (let i = 0 ; i < height.length;) {
    if(height[i] === IS_VALLEY && leftMountainIdx >= 0) {
      if(height[i + 1] !== IS_VALLEY && typeof height[i+1] !== 'undefined') {
        valleyIdx = i;
        // for at here finding the rightMountain latest
        rightMountainIdx = i + 1;
        let val = height[rightMountainIdx];
        for (let j = rightMountainIdx + 1; j < height.length ; j++) {
          const current = height[j];
          if(current >= val) {
            val = current;
            rightMountainIdx = j;
          }else {
            break;
          }
        }
        result += Math.min(height[leftMountainIdx])
        i = rightMountainIdx + 1;
        continue;

      }
    }else {
      leftMountainIdx = i;
    }
    i++;
  }

  return result;
}