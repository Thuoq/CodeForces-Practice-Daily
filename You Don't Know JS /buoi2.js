// Spread, rest operator, destructuring 

// 1. Spread | Spread out 

var arr = [ 1, 2, 3, 4, 5]

var arr2 = [...arr, 6]
console.log(arr2)


function add(a,b,c,d, e ) { 
    return a + b + c +d + e;
}

// add(arr[0],arr[1]) so end and so for

console.log(add(...arr))
console.log("==============")

// 2. Rest 

function mySubtract(num1,num2, ...args) {  // rest // parameter
    console.log(num1,num2,args)
}

 
console.log(mySubtract(...arr)) // spread  // argument

// Destructuring || unpack zip 
// parameter 

var obj = {
    x:1,
    y:2
}
function destruct({x,y}) { 
    console.log(x,y)
}
var obj = {x:1,y:2,z:3,t:10}

const {x,y,...anotherObj} = obj // rest
const [e1,e2,...anotherArr] = arr
console.log(x,y)
console.log(anotherObj)
console.log(e1,e2,anotherArr)



function Animal(name,age) { 
    this.name = name
    this.age = age

}

Animal.prototype = {
    // valueOf() {
    //     return {
    //         name: this.name,
    //         age: this.age
    //     }
    // }
}

const cat = new Animal("thuong",10)
console.log(cat)

const d = new Date()
const value  = d.valueOf()
console.log(value)