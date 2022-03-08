
// 6.1 Introduction to Object 
// Thường thỉnh thoảng phân biệt giữa properties định nghĩa trên 1 object own property để chỉ những hình thức không được kế thừa 
// Ngoài tên thì nó có 3 thuộc tính là wriable,enumerable configurable

// 6.2.3 Prototype
// 6.3.2 Inheritance 

let o = {}
o.x = 1
let p = Object.create(o)
p.y = 2
let q = Object.create(p)
q.z = 3
let f = q.toString()
console.log(q.x + q.y)
console.log('===================')
// Exception
let unitcircle  =  { r: 1 }
let c = Object.create(unitcircle)
c.x = 1 
c.y = 1
c.r = 2
console.log(unitcircle.r)
console.log(c.__proto__.r = 10)
console.log(unitcircle.r)