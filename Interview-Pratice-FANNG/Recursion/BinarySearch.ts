// Must: Array sorted
const binarySearch = (numbers:number[], target:number) => {
    let left = 0, right = numbers.length -1;
    while(left<= right) {
        const middle =  Math.floor((left
            +right)/2)
        if (numbers[middle] === target) {
            return target
        }else if(numbers[middle] > target) {
            right = middle -1;
        } else {
            left = middle +1;
        }
    }
    return -1;

}
console.log(binarySearch([1,2,3,4,5,6],6))