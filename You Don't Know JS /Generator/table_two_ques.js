function *foo(x) {
    var y = x * (yield "hello")
    return y
}
var it = foo(2)
console.log(it.next())
console.log(it.next(19).value)