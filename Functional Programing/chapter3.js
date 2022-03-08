// All in one 
// addating arguments to parameters


function spreadArgs(fn) { 
    return function spreadFn(argsArr) {
        return fn(...argsArr)
    }
}

function foo(x,y) {
    return x + y
}
function bar(fn) { 
    console.log(fn([3,9]))
}
bar(spreadArgs(foo))

function combineFirstTwo([v1,v2]) { 
    return v1 + v2
}
function gatherArgs(fn) { 
    return function gatheredFn(...argsArr){ 

        return fn(argsArr)
    }
}
var val = [1,2,3,4].reduce(gatherArgs(combineFirstTwo))

// Some Now, Some later 

function ajax(url,data,callback) { 
    console.log(url,data,callback)
}

function getPerson(data,cb) { 
    ajax("http://some.api/person",data,cb)
}

function getOrder(data,cb) { 
    ajax("http://some.api/person",data,cb)
}

function getCurrentUser(cb) { 
    getPerson({user:1},cb)
}

function getPerson(data,cb) { 
    console.log(data,cb)
    ajax("http://some.api/person",data,cb)
}
function partial(fn,...presetArgs) { 
    return function partiallyApplied(...laterArgs) { 
        return fn(...presetArgs,...laterArgs)
    }
}
var partial = (fn, ...presetArgs) => (...laterArgs) => fn(...presetArgs,...laterArgs)

var getPerson = partial(ajax,"http://some.api/person")
var getCurrentUser =  partial(ajax,"http://some.api/person",{user:1})

var getCurrentUser = partial(getPerson,{user_id:1})

getCurrentUser("run callback Fnc")


// Reversing Arguments 


function reverseArgs(fn) { 
    return function argsReversed(...args) { 
        return fn(...args.reverse())
    }
}

var reverseArgs = fn => (...args) => fn(...args.reverse())


var person =  {
    name: "Kyle Simpson",
    address: { 
        street: "123 Easy St",
        city : "Js'ville",
        state: "Es"
    }

}
console.log("===================")
function outer() { 
    var name = "Kyle Simpson"
    return middle()
    function middle() { 
        var street = "123 Easy ST";
        var city = "JS'ville";
        var state = "ES"
        return [name,street,city,state]
    }
    
}
var person = outer()
console.log(person)

