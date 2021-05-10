const times = [
    [1, 2, 9],
    [1, 4, 2],
    [2, 5, 1],
    [4, 2, 4],
    [4, 5, 6],
    [3, 2, 3],
    [5, 3, 7],
    [3, 1, 5]
]
const K = 1
const N = 5;
const networkDelayTime = (times, N, k) => {
    // Times >=1 (vertex >=1 )
    // Init distances Infinity   
    const distance = new Array(N).fill(Infinity);
    // INIT FIRST START
    distance[k - 1] = 0
    for (let i = 0; i < N - 1; i++) {
        let count = 0;
        for (let j = 0; j < times.length; j++) {

            const src = times[j][0]
            const target = times[j][1]
            const weight = times[j][2]
            if (distance[src-1] + weight < distance[target-1]) {
                distance[target-1] = distance[src-1] + weight
                count++;
            }
        }
        if (count === 0) break;
    }
    

    const ans = Math.max(...distance)
    return ans === Infinity ? -1 : ans
}