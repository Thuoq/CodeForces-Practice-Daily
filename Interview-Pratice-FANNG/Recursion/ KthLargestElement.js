// Swapi
//1,5,6,2,1,2
const swap = (arr,i,j) => {
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
// 1,5,6,2,1,2
// NUMBERS[RIGHT] = 2
// LEFT: 0 => numbers: 2,5,6,2,1,1 => i =1
// LEFT: 1 =>  numbers: 2 5 6 2 1 1
// _____ 
// LEFT: 3 => numbers: 2 2 6 5 1 1  i = 2
// LEFT: 4 => numbers: 2 2 1 5 6 1 i = 3
// LEFT: 5 => numbers: 2 2 1 1 5 4 : i =4 
const getPartition = (numbers,left,right) => {
    // LEFT: 0
    // RIGHT: 5
    let i = left;
    for (let j = left ; j <= right ; j ++) {

        if(numbers[j] <= numbers[right]) {
            swap(numbers,i,j);
            i++;
        }
    }
    return i-1; // i = 4 => i-1=3
}
//1,5,6,2,1,2
const quickSort = (numbers,left,right) => {
    // left: 0  
    // right: 5
    if(left < right) {
        const partition = getPartition(numbers,left,right)
        // 0 -> 3
        quickSort(numbers,left,partition-1);
        // 4 -> 5
        quickSort(numbers,partition+1,right)
    }
}

const findKthLargest = (numbers,k) => {
    const indexToFind = numbers.length - k;
    quickSort(numbers,0,numbers.length-1);
    return numbers[indexToFind]
}
findKthLargest([1,5,6,2,1,2])