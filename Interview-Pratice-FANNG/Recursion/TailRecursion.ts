const recFactorial = (x:number):number => {
    if(x <=1 ) {
        return 1;
    }
    return x * recFactorial(x - 1);
}

const tailRecursion = (x: number, totalSofar = 1): number => {
    if(x === 0){
        return totalSofar
    }
    return tailRecursion(x-1,totalSofar*x)
}