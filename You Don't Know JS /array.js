

let undefs = [1,,3]
console.log(undefs.length)

console.log("=====================================")
let sparseArr = [,,2,3]
sparseArr.forEach(function(el) {
    console.log(el)
})
console.log("=====================================")

var a = [2,3,4]
a.reduceRight((acc, val) => { 
    console.log(acc,val)
    return acc + val
})
console.log("=====================================")

function vectorMutiply({x,y}, scalar)  { 
    console.log(x,y,"Parameters")
    return {x:x*scalar, y:y*scalar};
}
vectorMutiply({x:1,y:20},3)


