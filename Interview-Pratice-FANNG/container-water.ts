function solution(numbs: number[]): number {
    const obj: any = {}

    for (let i = 0; i < numbs.length; i++) {
        obj[numbs[i]] = i;
    }
    console.log(Math.max(...numbs))
    return 1
}
console.log(solution([1, 7, 8, 9, 10]))