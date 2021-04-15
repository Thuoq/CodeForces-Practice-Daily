export const numbers = [99,44,6,2,14,3,54,8,8,9,78,7,2];
const mergeSort = (numbers:number[]):number[] => {
    if(numbers.length == 1)  {
        return numbers;
    }

    const indexMiddle = Math.round(numbers.length / 2);
    const leftArray = numbers.slice(0, indexMiddle);
    const rightArray = numbers.splice(indexMiddle,numbers.length);
  
    return merge(mergeSort(leftArray), mergeSort(rightArray));
}

function merge(left:number[],right:number[]):number[] {
    const sortedItems = [];

    while (left.length && right.length) {
        if (left[0] <= right[0]) {
            sortedItems.push(left.shift()!);
        } else {
            sortedItems.push(right.shift()!);
        }
    }
 
    return [...sortedItems, ...right,...left];
}
console.log(mergeSort(numbers))