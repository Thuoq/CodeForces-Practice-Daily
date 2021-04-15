const quickSort = (numbers:number[]):number[] => {
    if (numbers.length < 2) return numbers
    const pivotIndex = numbers.length -1 ;
    const pivot = numbers[pivotIndex];
    let leftNumbers = [];
    let rightNumbers = [];
    for (let i = 0; i < pivotIndex; i ++) {
        let currentNumber = numbers[i]
        if (currentNumber < pivot){
            leftNumbers.push(currentNumber)
        }else {
            rightNumbers.push(currentNumber)
        }
    }
   
    return [...quickSort(leftNumbers), pivot, ...quickSort(rightNumbers)]
}
console.log(quickSort([3,7,8,5,2,1,9,5,4]))