// This

// Call-Site

// Default Binding 
var a= 10;
function foo() {
    // this is here is global 
    console.log(this.a)
}

foo() // 10 on the website not nodejs

// Implicit Binding
// Rule call-site co 1 context object 

function foo(){ 
    console.log(this.a)
}
var obj = {
    a: 10,
    foo: foo
}
obj.foo()
// Implicit Lost 
function foo() { 
    console.log(this.a)
}
var obj = {
    a: "Implicit Lost",
    foo: foo
}
var b = obj.foo // function reference/alias 
b() // vd (1)
 
// Explicit Binding 
// Với ràng buộc như ở trên ta phải thay đổi 1 object và thêm 1 methods có 1 cách khác cũng làm the same thing đó là sử dung => call apply đc gọi là explicit Binding
console.log("==================")
function foo(num) {
    console.log(this.a)
    console.log(num)
}
var obj = {
    a:2
}
foo.call(obj,100) // force this of fn to object
// but explicit binding no k xu ly dc van de (1)
console.log("===========1=========")

// hard binding 
console.log("====================")
function foo() { 
  return this.a 
}

var obj = { 
    a:"hard binding"
}
var bar = function() {
    foo.call(obj)
}

bar()

//  context
// Mấy hàm tự built từ JS thường cung cấp 1 optional đc gọi là context  thiết kế để giải pháp sử dụng bin

console.log("====================")

function foo(el) { 
    console.log(el,this.id)
}

var obj = { 
    id: " awesome"
}

var arr = [1,2,3].forEach(foo.bind(obj)) // awesome 1 
var arr2 = [1,2,3].forEach(foo,obj)



// Final rules is: new binding 

function foo(a) {
    this.a = a;
}
var bar = new foo(10)

// Determining this 
// new , explicit -> implicit binding -> default

// Binding exceptions

// ignored this 

// if pass null or undefined at bind of apply -> default binding 
console.log("============")
function fouo() { 
    console.log(this.a)
}
var a ="Ignored this "
fouo.call(null)