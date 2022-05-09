function *foo(x) {
    var  y = x *(yield)
    return y;
}

var it = foo(6)

it.next()

console.log(it.next(10).value)
console.log(it.next())