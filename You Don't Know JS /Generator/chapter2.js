var x = 1;
function *foo() { 
    yield console.log("Hello")
    x++
    yield
    console.log("X", x)
    console.log("alllla")
}

function bar() { 
    x++;
}
var it = foo()
it.next()
console.log(x)
it.next()
console.log(x)
it.next()


