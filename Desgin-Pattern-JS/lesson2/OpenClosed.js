//enterprise design
let Color = Object.freeze({
    red: 'red',
    green: 'green',
    blue: 'blue'
})
let Size = Object.freeze({
     small: 'small',
     medium: 'medium',
     large: 'large'
})
class Product {
    constructor(name,color,size) {
        this.name = name 
        this.color = color
        this.size= size
    }
}
class ColorSpecification { 
    constructor(color) {
        this.color = color
    }
    isSatisfied(item) { 
        return item.color == this.color
    }
}
class SizeSpecification { 
    constructor(size) {
        this.size = size
    }
    isSatisfied(item) { 
        return item.size == this.size
    }
}
class BetterFilter { 
    filter(items, spec) {
        return items.filter(x => spec.isSatisfied(x))
    }
}
class AndSpecification { 
    constructor(...specs) {
         this.specs = specs
    }
    isSatisfied(item) {
        return this.specs.every(spec => spec.isSatisfied(item))
    }
}
// open for extension, closed for modification
class ProductFilter { 
    filterByColor(products,color) {
        return products.filter(p => p.color == color)
    }
    filterBySize(products,size){
        return products.filter(p => p.size == size)
    }
    filterBySizeAndColor(products,size,color) {
        return products.filter(el => el.size == size && el.color == color)
    }
}
let apple = new Product("apple",Color.green,Size.small)
let tree = new Product("Tree",Color.green,Size.large)
let house = new Product("House",Color.blue , Size.large)

let products = [apple,tree,house]
let pf = new ProductFilter() 
console.log(`1 Old Design`)
for (let p of pf.filterByColor(products,Color.green)) {
    console.log(` *${p.name} is green`)
}
console.log(`2 Better Design`)
let bf = new BetterFilter()
for(let p of bf.filter(products
                    ,new ColorSpecification(Color.green))) 
{ 
    console.log(` *${p.name} is green`)
}
let specs = new AndSpecification(
    new ColorSpecification(Color.green)
    ,new SizeSpecification(Size.large)) 

console.log(`And filter Better Design`)
for(let p of bf.filter(products,specs)) {
  
    console.log(` *${p.name} is green and size large`)
}