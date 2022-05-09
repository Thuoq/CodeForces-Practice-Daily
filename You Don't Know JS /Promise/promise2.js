// Sync  Đồng bộ 
// async: Bất đồng bộ 

// Promise + Browser (SetTimeout)


// queue: Priority Queue 
// luoon mircrotask, macrotask 
// 

// macrotask : webbroser ( setInterval, setTimeOut)
// mircrotask: Promise + assync await 

// 0 1
// Micro  4 3 
async function abc() {
    console.log(8) // in ra 8 
    await Promise.resolve(2).then(console.log)
    
    console.log(3)
}
setTimeout(() => console.log(1),0)

abc()
Promise.resolve(4).then(console.log)

console.log(6)