
// Motivation 
// Some object are simple and can be created in a single initializer call 
// other object require a lot of ceremony to create 
// Having an object with 10 init argument is not productive 
// Instead opt fo piecewise construction 

// Builder: When piecewise object construction is complicated provide an API for doing it succinctly


const hello = 'hello';
// let html = [];
// html.push('<p>')
// html.push(hello)
// html.push('</p>')
// console.log(html.join(''))
const words = ['hello', 'world']
// html=[]
// html.push('<ul> \n')
// for(const word of words ) { 
//     html.push(` <li>${word}</li> \n`)
// }
// html.push('</ul>')
// console.log(html.join('')) 

class Tag{ 
    static get indentSize() {return 2}
    constructor(name='',content='') {
        this.name = name
        this.content = content
        this.children = []
    }
    toStringImpl(indent) { 
        let html = []
        let i = ' '.repeat(indent * Tag.indentSize)
        html.push(`${i}<${this.name}>\n`)
        if(this.content.length > 0) {
            html.push(' '.repeat(Tag.indentSize * (indent + 1)));
            html.push(this.content)
            html.push('\n')
        }
        for ( let child of this.children) {
            html.push(child.toStringImpl(indent+1))
        }
        html.push(`${i}</${this.name}>\n`)
        return html.join('')
    }
    toString() {
        return this.toStringImpl(0)
    }
    static create(name) {
        return new HtmlBuilder(name)
    }
    
}
class HtmlBuilder { 
    constructor(rootName) {
        this.root = new Tag(rootName);
        this.rootName = rootName;
    }
    addChild(childName,childText) {
        let child = new Tag(childName,childText)
        this.root.children.push(child)
    }
    addChildFluent(childName,childText) {
        let child = new Tag(childName,childText)
        this.root.children.push(child)
        return this;
    }
    toString() {
        return this.root.toString()
    }
    build() {
        return this.root;
    }
    clear() {
        this.root = new Tag(this.rootName)
    }
}

// Non fluent builder 
let builder = new HtmlBuilder('ul')
for (const word of words) {
    builder.addChild('li',word);
}
// builder fluent 

let tag = new Tag.create('ul')

builder.clear()
builder
    .addChildFluent('li','foo')
    .addChildFluent('li','bar')
    .addChildFluent('li','be')
console.log(builder.toString())