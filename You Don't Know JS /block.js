// console.log(this)
// // global env
// var a = 10;
// var example = function example() {
//     // local env
//     console.log(a)
// }
const obj = { 
    name: "thuong"
}

obj.name  = "Tuan";
console.log(obj)
// var amount = 99.99
// amount= amount*2
// var a = 10;
// console.log(a)
// console.log(amount)
// console.log(a)
// // Var let const

// // Var let 
// var a = 10;

// // decative 
// if(true ) {
//     let b = 10;
// }
// // let const 
// let another_var;
// // function expression (1)
// // function decration (2)
// console.log(b)

// // 1. Javascript Two Phases
// console.log(greeting)
// var greeting = "Hello"
// greeting = "sd"

// console.log("Howdy")
// saySomeThing("dep trai")
// function saySomeThing(greeting) { 
//     "use strict"
//     console.log(greeting)
// }

// // 2. Hoisting 
// function saySomeThing() { 
//     var greeting = "Hello"
//     // {
//     //     greeting = "howdy"; // error here because let 
//     //     let greeting = "Hi"
//     //     console.log(greeting)
//     // }
// }

// // Lexical Scope 

// // RED


// var students = [
//     {id:1,name:"Thuong"},
//     {id:2,name: "Yen"},
//     {id:3,name: "Nga"},
//     {id:4, name:"Phong"}
// ]
// function getStudentName(studentID) { 
//     // Blue 
//     for (const student  of students) {
//         // Green
//         if (student.id == studentID)  { 
//             return student.name
//         }
//     }
// }

// function testNextStudent() { 
//     test = "suzy"
// }
// var nextStudent = getStudentName(2)
// console.log(nextStudent)
// testNextStudent()
// console.log(test)

// // Scope chain 

// var studentName = "Suzy"

// function printStudent(studentName){ 
//     studentName = studentName.toUpperCase()
//     console.log(studentName)
// }
// printStudent("Frank")
// printStudent(studentName)
// console.log(studentName)

// console.log(fncExpression())
// function fncExpression () { 

// }
// var  declare = function declareFnc() {

// }

// var fncArrow  = () =>  { 
//     console.log("Run Fnc Arrow")
// }
// console.log(fncArrow.name)
// console.log(fncExpression.name)
// var var_declared = 10;
// var var_declared =11;
// console.log(var_declared)
// // hosting 

// var increment = 10

// if (true) { 
//     let hiddenVar = 100; // create local scope 
//     increment +=1;
// }
// const b = 10;


// const obj = { 
//     a: 10,
// }

// console.log(obj)
// //console.log(increment)
// //  hoisted with function 
// console.log(greet)

// var greet = function() { 
//     console.log("hello")
// }

