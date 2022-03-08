// Arrray 
// 1.1 Create a Array
// 1. Array literals 
// 2. ... spread operator 
// 3. Array() constructor 
// 4. Array.of() and Array.from()

var arrLiterals = [1,2,3,4]
var arrSpread = [...arrLiterals] 
arrSpread[0] = 100;
// console.log(arrLiterals)
// console.log(arrSpread)
var arrConstructor = new Array(10).fill([])
// console.log(arrConstructor)
// arrConstructor[0][0] = 10000
// console.log(arrConstructor)
// console.log(arrLiterals)
// console.log(arrSpread)
// console.log(arrConstructor)
// arrConstructor[0][0]= 10;
// console.log(arrConstructor)
// console.log(arrConstructor)
// console.log("=========================")
// 1.2 Array Methods 
// 1.2.1 for Earch(callback(el,idx))
var arrLiterals = [100,"hu","Male"]
arrLiterals.forEach(function(el,idx){ 
    console.log(el,idx)
})
// // // 1.2.2 Map
var newArr = arrLiterals.map(function(el,idx) { 
    return el * 3
})
//console.log(newArr)
// console.log("=========================")

// 1.2.3: Filter
var newArr = arrLiterals.filter(function(el,idx) { 
    return el == 100
})
console.log(newArr)
// console.log(newArr)
// // console.log("=========================")

// for(var el of arr ) { 
//     if (condition) {
//         return el
//     }
// }
// // // 1.2.4 Find and findIndex
// // /// 1.2.4.1 Find return undefined when not matching 
var arrLiterals = [9,2,3,4]
var newVal = arrLiterals.find(function(el,idx) { 
    return el > 10
})

// console.log(newVal)
// // console.log(newVal)
// // console.log("=========================")
// 1.2.4.2 FindIndex return -1 when not matching  
var newVal = arrLiterals.findIndex(function(el,idx){
    return el > 2
})

// // console.log(newVal)
// // console.log("=========================")
// // // 1.2.5 Some and Every()
// // //  some value satisfied condition
// // var arr = [1,2,3,5,5]
// // var pred = arr.some(function(el) { 
// //     return el < 10
// // })
// // console.log(pred)
// // console.log("=========================")
// // //  every value satisfied condition
// // var pred = arr.every(function(el) { 
// //     return el >4
// // })
// // console.log(pred)
// // console.log("=========================")

// // Reduce and reduceRight 
// // Reduce 
// // init value 
// // two argument in call back accumulated result,value next

var a = [1,2,3,4,5,6]
// 1+ 2  = 3
// 3 + 3 = 6
// 6 + 4 = 10;

var val = a.reduce(function (acc,val) { 
    return acc+val 
}) 
// // console.log(val)
var arr = [[1,2],[3,4,2]]
// [1,2,3,4,2]
// var flatten = arr.reduce((acc,val) => { 
//     return acc.concat(val)
// },[])
// // console.log(flatten)
// // console.log("=========================")
// // // Reduce Right
// // // Instead of  begin left , reduceRight begin right like the same its name
// // var a = [3,2,4]
// // console.log(a.reduceRight(function(acc, val) {
// //     return acc**val
// // })) // (4^2)^3
// // console.log("=========================")
// // // Flatten arays wuth flat() and flatMap()
// // // ES2019
// // // Flat(num): number level about wanan flat
// console.log([1,[2,3]].flat())
// // console.log([[1,2,3]].flat(2))
// // console.log("=========================")
// // // FlatMap() | this like a.map(f).flat()
// // var a = ["I, love, you"]
// // var res = a.flatMap(text => text.split(", "))
// // console.log(res)
// // console.log("=========================")
// // // Stack and queue
// // // Stack LIFO 
// // var stack = []
// // stack.push(...[1,2,3]) // Push the last 
// // console.log("When Stack push 1",stack)
// // stack.pop() // Take the last 
// // console.log("When Stack last 1",stack)

// // // QUEUs FIFO 
// // var queue = []
// // queue.push(...[1,2,3])
// // console.log("When Queue push 1",stack)
// // queue.shift() // O(n) not like dequeue

// // // Subarrays with slice, splice, fill, coppyWithn
// // // slice(beginIdx,endIdx) slice [beginIdx,endIdx) 
// // // beginIdx ,endIdx accept negative number =1 is last element
// // // non side effect
// // console.log("=========================")
// // var a = [1,2,3,4,5,6]
// // console.log(a.slice(2,4))
// // console.log(a.slice(1,-3))
// // console.log("=========================")
// // // splice side Effect
// // var a = [1,2,3,4]
// // a.splice(2,0,'B') // begin from 2 delete 0 and insert to 'B'
// // console.log(a)

// // // Array Searching indexOf and lastIndexOf
// // // IndexOf begin and lastIndexOf ngc lai
// // // return indexOf 2 if not return -1
// // console.log("=========================")
// // var a = [1,2,3,4]
// // console.log(a.indexOf(2))
// // console.log("=========================")
// // // Sort 
// // // default sort by alphabet example 
// console.log("=========")
var a = [33,44,1111,222]
a.sort()
console.log("Alphabet order",a) 
console.log(a.sort((a,b) =>a-b)) // <0 ,or , >0  depending on order // NLogN // N^2 
// console.log(a) bubble sort 
// // // sometime case-insensitive alphabetical 
var a = ["Captain Marvel",'Iron Man','Ant man','spider man', 'black-window'] // bubble sort 
a.sort() // NlogN or N^2

console.log("Sort default", a)
a.sort(function(c,t) {
    var s = c.toLowerCase()
    var b = t.toLowerCase()
    if( s < b) return -100;
    if (s > b) return 100;
    return 0;
})
console.log("Sort config",a)

// HOF curring compose
