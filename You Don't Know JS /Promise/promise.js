// Error Handling 
// function foo() {
//     setTimeout(function() {
//         baz.bar()
//     },100)
// }
// setInterval(displayHello,1000)
// setInterval(() => {
//     myFnc("Hello 2 form mt Fnc")
// })
// var displayHello = function(){
//     console.log("Hello")
// }
// function myFnc(msg) {
//     console.log(msg)
// }

// function getUp() {
//     console.log("I am waking up ");
// }
// function makeCoffee() {
//     setTimeout(() => {
//         console.log("Making coffee in 5 minutes")
//     },1000)
// }
// function haveBreakFast() {
//     Promise.resolve().then(() => console.log("I have my breakfast"))
// }
// makeCoffee()
// haveBreakFast()
// getUp()

// const promise1 = Promise.resolve("First")
// const promise2 = Promise.resolve("Second")
// const promise3 = Promise.resolve("Third")
// const promise4 = Promise.resolve("Fourth")

// const runPromises = async () => {
//     const res1 = await Promise.all([promise1,promise2])
//     const res2 = await Promise.all([promise3,promise4])
//     return [res1,res2]
// }
// debugger 
// runPromises()
// .then(res => console.log(res))
// .catch(err => console.log(err))

// async function abc() {
//     console.log(8)
//     await Promise.resolve(2).then(console.log)
//     console.log(3)
// }
// setTimeout(() => console.log(1),0)

// abc()
// Promise.resolve(4).then(console.log)

// console.log(6)

class InstPrivateClass { 
    #privateFiled = 100;
    static #count = 0;
    constructor(val) {
        this.#privateFiled =val
       
    }
    static printCount() {
        return this.#count ++;
    }
}

var a = new InstPrivateClass(10)

a.printCount()