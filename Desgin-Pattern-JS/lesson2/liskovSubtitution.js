class Rectangle { 
    constructor(_width,_height) {
        this._width = _width
        this._height = _height
    }
    set height(value) {
        return this._height = value
    }
    set width(value) {
        return this._width = value
    }
    get height() {
        return this._height
    }
    get width() {
        return this._width
    }
    get area() {
        if(this.isSquared()) {
            return this._width * this._width
        }
        return this._width * this._height
    }
    isSquared() {
        return this._height === this._width;
    }
    toString(){
        return `${this._width} x ${this._height}`
    }
}
class Square extends Rectangle{ 
    constructor(size) {
        super(size,size)
    }
    set width(value) {
        this._width = this._height = value
    }
    set height(value) {
        this._height = this._width = value
    }

}
let useIt = function(rc) {
    let width = rc._width
    rc.height = 500;
    console.log(
        `expected are ${500*width}` + 
        ` got ${rc.area}`
    )
}


let rc = new Rectangle(200,100)
console.log(rc.toString())
let sq = new Square(100)

console.log(sq.toString())
sq.width = 10
console.log(sq.toString())
console.log("===========")
useIt(sq)