// Object

// Object có 3 properties cơ bản 
// 1. writable : 
// 2. enumerable: nghĩa là có thể for-in nghĩa là có thể loop đc ko ? 
// 3. configurable: nghĩa là nó có thể deleted và nó có thể thay đổi được mấy cái thuộc tính hay ko 

// prototype  => Object
'use strict'

var coordinate = Object.create({}, { 
    brz:  { 
        value: 10, 
        enumerable: true
    },
    x: { 
        value: 100,
       
    }
})
// coordinate.x = "hello"
// for( var key in coordinate) { 
//     console.log(key)
// }
// Object.defineProperty(coordinate, 'x', {
//     writable:true
// })
// coordinate.x = "hello"

// Object.defineProperty(coordinate,'brz', {
//     writable:true
// })
// coordinate.brz = 1000;
// console.log(coordinate)
// console.log(coordinate)
// coordinate.brz = "assginment"
// console.log(coordinate)
// delete coordinate.brz
// console.log(coordinate)
// console.log(coordinate)
// delete coordinate.brz
// console.log(coordinate) // Object.assgin 
// var a = Object.create({})
// a.x = 100;
// var b  = Object.create(a)  // own properties 
// b.y = 2000;
// var c = Object.assign({},c)
// console.log(c.x + c.y)

// // coordinate.brz = 100
// Object.defineProperty(coordinate,'brz', { 
//     writable:true
// })
// console.log(coordinate)
// console.log("============")
// // Object.defineProperty(coordinate,'brz', { 
// //     writable: true
// // });
// // console.log("=========================")
// // console.log("Make writable ")
// // coordinate.brz = 1000
// // var new_coordinate = Object.assign({}, coordinate)
// // console.log(new_coordinate)

// 6.2 Creating Objects
// 3 type create a object 
// 1. Object Literals 
// 2. Object with key word new 
// 3. Object.create

/// 6.2.1 Object Literals 
var empty = {} 
var point = {x:0, y:10}
console.log(point)
console.log("=========================")
/// 6.2.3 Object with New 
// var o = new Object()
var a = new Array()
console.log(a)

// var r = new Map()

// // console.log(r)
// // console.log("=========================")
// // // 6.2.3 Prototype
// // // Prototype chain 
// // // 6.2.4 Object Create 
// prototype
// var a = Object.create({})
// a.x = 100;
// var b = Object.create(a) // x not own properites 
// b.y = 200;
// console.log(coordinate)
// var c = Object.assign({},coordinate) 
// // coppy toan bo own properties , enumerable
// console.log(c)
// prototype chain  
// var obj1 = Object.create({})
// obj1.x = 100;
// var obj2 = Object.create(obj1)
// var obj3 = {}
// obj2.y = 1000;
// console.log(obj2.x + obj2.y)
// console.log("=========================")
// var obj = {}

// console.log(obj.__proto__)
// var num = 10;
// console.log(num.__proto__.__proto__)
// var obj1  = Object.create({})
// obj1.x = 100;
// var obj3 = Object.create(obj1)
// obj3.y = 1000;
// var obj2 = Object.assign({},obj3) // coppy own propertires and enumerable
// console.log(obj2.x + obj3.y)

// shallow copy va deep coppy

var point = { 
    x: 10,
    y: 100,
    height: { 
        z: 10
    },
    
    valueOf(){ 
        console.log("=====")
        return 100;
    }
}
var anotherPoint = JSON.parse(JSON.stringify(point)); 
// // spread operator and Object assgin
// anotherPoint.height.z = 1000
// console.log(point)
// console.log(anotherPoint)

// ToString vs ValueOf
// console.log(point.toString())
console.log(point == 100)


// // var p1 = Object.create({x:1,y:2})
// // console.log(p1.x + p1.y)
// // console.log("=========================")
// // // Object.create(prototype,propertiesObject) 

// // // 6.3 
// // // 6.3.1 Inheritance 
// // var ong = {}
// // ong.x = 1
// // var cha = Object.create(ong)
// // cha.y = 2;
// // var con = Object.create(cha)
// // con.z = 10
// // console.log(con.z + con.y + con.x)
// // console.log("=========================")
// // // 6.3.2 
// // var ong = {}
// // ong.x = 1
// // var cha = Object.create(ong)
// // cha.y = 2;
// // var con = Object.create(cha)
// // con.z = 10
// // ong.x = 100
// // console.log(con.z + con.y + con.x)
// // // Find the scope chain if not move the first scope chain
// // console.log("=========================")
// // // 6.4 Extending Objects with Object.assign()
var obj = { 
    a: {
        num: 1000
    }
}
// // spread-out 
// var obj2 = JSON.parse(JSON.stringify(obj)); 

// obj2.a.num = "hello";
// console.log(obj)
// console.log(obj2)
// // // Object.assgin(target,src)  enumerable own properties one or more src object to target obj
// // // If the src have set and get methods it execute 
// // // If the source value is a reference to an object, it only copies the reference value.
// // var obj = {
// //     a: { 
// //         b:10
// //     }
// // }
// // console.log(obj)
// // var tar = Object.assign({},obj)
// // tar.a.b = 100
// // console.log(obj)
// // console.log(tar)
// // console.log("=========================")
//6.5 Object methods toString, valueOf 
// convert type object ve primitive value 
// var point = { 
//     x:100,
//     y:100,
//     toString() { 
//         console.log("Run To String")
//         return `${this.x} ${this.y}`
//     },
//     valueOf() { // number 
//         return Math.hypot(this.x,this.y)
//     }
// } 

// console.log(point == `100 100`)

// // var point = {
// //     x:1,
// //     y:2,
// //     toString:function(){ return `${this.x}, ${this.y}`}
// // }
// // console.log(point.toString())
// // // Value Of 
// // var point = { 
// //     x:100,
// //     y:100,
// //     valueOf: function() { return Math.hypot(this.x,this.y)}
// // }
// // console.log(Number(point))

// 6.6 Some extended object literal Syntax 
// console.log("=========================")
// var x = 1, y = 2
// var obj = { 
//     x:x,
//     y:y
// }
// // ES6 can write this 
// var x =1, y=3
// var obj = {x,y} // destructuring 
// console.log(obj)

// // // // 6.6.1 Spread Operator || spread out
// // // // Spread operator copy properties of an exitsting object into a new object 

// // console.log("=========================")
// var pos = { x:0,y:10}
// var dim = {width: 100,height:200,y:1000}
// var rect = {...pos, ...dim }
// console.log(rect)
// // console.log("=========================")
// // // overrides 
// // var obj = {x:1}
// // var res = {...x, x:10}
// // console.log(res)
// // console.log("=========================")
// // shallow clone 
// var obj = { 
//     a:{
//         b: 1000
//     }
// }

// var newObjOne = {...obj}
// var newObjTwo = Object.assign({}, obj)
// newObjTwo.a.b = "00";
// console.log(newObjTwo)
// console.log(newObjOne)
// // // Spread-out with deep clone 
// // var obj = { 
// //     x: { 
// //         a: 10,
// //     }
// // }
// // console.log(obj.x.a)
// // var res = {...obj}
// // res.x.a = 100;
// // console.log(res)
// // console.log(obj)
// // console.log("=========================")
// // // Avoid this problem 
// // var obj = { 
// //     x: { 
// //         a:"clone"
// //     }
// // }
// // console.log("Trước",obj)
// // var obj2 = JSON.parse(JSON.stringify(obj))
// // console.log("Trước ",obj2)
// // obj2.x.a = "JSON"
// // console.log("Sau",obj)
// // console.log("Sau ",obj2)
// // // Remind spread-out only spreads the own properties of an object, not any inherited ones 
// // var obj = Object.create({x:1})
// // console.log(obj,obj.x)
// // var res = {...obj}
// // console.log(res.x)
// // console.log("=========================")
// 6.6.2 Properties accessor Getters and setters 
// if only getter is read-only
// if only setter is write-only

var p = {
    x:1,
    y:10,
    get hypo(){return Math.hypot(this.x,this.y)}
} 
// p.hypo = 100;
// // console.log(p.hypo)