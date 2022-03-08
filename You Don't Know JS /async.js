function one() {
    console.log("One running")
}
function two() {
    setTimeout(() => {
        console.log("two running")
    },0)
}

function three() {
    console.log("three running")
}

one()
two()

// for(var i = 0 ; i < 100000 ; i ++) { 
//     three()
// }

function timeOutify(fn,delay) { 
    var intv = setTimeout(function() {
        intv = null
        fn(new Error('Time out! '))
    },delay)

    return function() { 

        if (intv) { 
            clearTimeout(intv)
            fn.apply(this,arguments)
        }
    }
}
function foo(err,data) { 
    if (err) { 
        console.error(err)
    }else { 
        console.log(data)
    }
}
ajax