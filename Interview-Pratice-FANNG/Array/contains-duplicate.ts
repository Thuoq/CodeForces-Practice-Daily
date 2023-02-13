function containsDuplicate(nums: number[]): boolean {
  const objectCount: {[key:string] : number} = {};
 for (let i = 0; i < nums.length; i++) {
   const n = nums[i];
   if(objectCount[n]) {
     return true;
   }else {
     objectCount[n] = 1;
   }
 }
  return false
}

console.log(containsDuplicate([1,2,3,1]))
