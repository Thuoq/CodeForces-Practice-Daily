


// TEST CASES 

const TEST_CASES = [
    {
        numbers:[1,3,3,5,5,5,8,9],
        target: 5,
        output: [3,5]
    },
    {
        numbers: [1,2,3,4,5,6],
        target:4,
        output: [3, 3] 
    },
    {
        numbers: [1,2,3,4,5],
        target: 9,
        output: [-1,-1]
    }
]
export const binarySearch = (numbers:number[],left:number,right:number,target:number) =>  {
    while(left <= right) {
        const middleIdx = Math.floor((left + right) /2 );
        const numberMid  = numbers[middleIdx];
        if(numberMid > target) {
            right = middleIdx-1
        }else if (numberMid < target) {
            left = middleIdx +1
        }else {
            return middleIdx;
        }
    }
    return -1;
}
const searchRange = function (numbers:number[],target:number) {
    if(!numbers.length) return [-1,-1]
    const firstPosition = binarySearch(numbers,0,numbers.length-1,target);
    if(firstPosition === -1) return [-1,-1]
    let startPosition = firstPosition,endPosition = firstPosition
    let temp1= startPosition , temp2=endPosition  ;
    while (startPosition !=-1 ) {
        temp1 = startPosition
        startPosition = binarySearch(numbers,0,startPosition-1,target);
    }
    startPosition = temp1;
    while (endPosition != -1) {
        temp2 = endPosition
        endPosition = binarySearch(numbers,endPosition+1,numbers.length-1,target);
    }
    endPosition = temp2;
    return [startPosition,endPosition]
    

}
for(let i  = 0 ; i < TEST_CASES.length ; i ++) {
    
    console.log(searchRange(TEST_CASES[i].numbers, TEST_CASES[i].target))
}