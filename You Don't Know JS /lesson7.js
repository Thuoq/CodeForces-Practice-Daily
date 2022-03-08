

// // function
// // arrow fnc vs function 
// // 1. PURE 
// // 2. Bind,apply 
// // 3. Closure 
// // 4. Compose 

// var fn = (x) => x*2
// var arr = [1,2,3,4]

// function forEach(arr,fn) {
//     for(var i = 0 ; i < arr.length ; i ++) {
//         arr[i] = fn(arr[i])
//     }
// }
// forEach(arr,fn)
// console.log(arr)

// function foo(msg) { // HOF
//     //var x = 10;
//     return function () {
//         return msg.toUpperCase();
//     }
// }
// var f = foo("thuong")
// console.log(f())

// var Auth = { 
//     authorize() { 
//         var credentials = `${this.username}: ${this.password}`
//         this.send(credentials,resp => {
//             if(resp.error) this.displayError(resp.error)
//             else this.displaySuccess()
//         })
//     },
//     send(credentials,fn) {
//         fn({error: `Error Here! ${credentials} `})
//     }
// }

// var Login = Object.assign(Object.create(Auth), { 
//     doLogin(usr,pw) { 
//         this.username = usr;
//         this.password = pw
//         this.authorize()
//     },
//     displayError(err) { 
//         console.log(err)
//     },
//     displaySuccess() {
//         console.log("Running Systems")
//     }
// })
// console.log(Login)
// Login.doLogin("thuong","thuong123")

// var identity = u => u;

// function output(msg, formatFn = identity)  { 
//     msg = formatFn(msg)
//     console.log(msg)
// }

// function upper(txt) { 
//     return txt.toUpperCase()
// }
// output('hello',upper)
// output('thuong')
// console.log("===================")
// function fioo(x,y) {
//     console.log(x,y)
// }
// function bar(fn) {
//     fn(...[3,7])
// }
// bar(fioo)

// //console.log("================")
// function spread(fn) { 
//     return function spreadFnc(...argsArr) {
//         return fn(argsArr)
//     }
// }
// var double = (list) => list.map(el => el*2);

// var run = spread(double)
// run(1,2,3,4,56)
// console.log()

function a(x) {
	console.log("Hàm bắt đầu chạy");
  x++;
  return function () {
	console.log("Tăng 1");
    console.log(++x);
  };
}

// a(1)();
// a(1)();
// a(1)();

// let b = a(1);
// b();
// b();
// b();
// Function vs arrowFnc 

// arrow ko context 
// function (bind,apply,call)
// arguments 

function run(num,num2) {
    console.log(num,num2)
    console.log(this.name)
}
var f = () => {
    console.log(this)
}
var obj = {
    name: "thuong",
    run() {
        var self = this;
        return f;
    }
}
var a = obj.run()()
// a() 
