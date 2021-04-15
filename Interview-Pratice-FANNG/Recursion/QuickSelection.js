// Swap
//1,5,6,2,1,2
const swap = (arr, i, j) => {
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// 1,5,6,2,1,2
// NUMBERS[RIGHT] = 2
// LEFT: 0 => numbers: 2,5,6,2,1,1 => i =1
// LEFT: 1 => numbers: 2 5 6 2 1 1
// _____ 
// LEFT: 3 => numbers: 2 2 6 5 1 1  i = 2
// LEFT: 4 => numbers: 2 2 1 5 6 1 i = 3
// LEFT: 5 => numbers: 2 2 1 1 5 4 : i =4 
const getPartition = (numbers, left, right) => {
    // LEFT: 0
    // RIGHT: 5
    let i = left;
    for (let j = left; j <= right; j++) {

        if (numbers[j] <= numbers[right]) {
            swap(numbers, i, j);
            i++;
        }
    }
    return i - 1; // i = 4 => i-1=3
}
//1,5,6,2,1,2
const quickSelect = (numbers, left, right, indexToFind) => {
    // left: 0  
    // right: 5
    const partition = getPartition(numbers, left, right)
    // 0 -> 3
    if (partition < indexToFind) {
        return quickSelect(numbers, partition + 1, right, indexToFind)
    } else if(partition>indexToFind){
       
        return quickSelect(numbers, left, partition-1, indexToFind)
    }else {
        return numbers[indexToFind]
    }
    
}

const findKthLargest = (numbers, k) => {
    const indexToFind = numbers.length - k;
    return quickSelect(numbers, 0, numbers.length - 1,indexToFind);
    
}
const array = [5, 3, 1, 6, 4, 2];
// 1 2 3 4 5 6
const kToFind = 4;

console.log(findKthLargest(array, kToFind))