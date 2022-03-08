// relationship that you should have between low level modules and hight level modules 
// dependency inversion principle basically states that high level modules should not directly depend on low level modules such as relationship, that they should instead depend 
let Relations = Object.freeze({
    parent: 0,
    child:1,
    sibling:2
})
class Person {
    constructor(name) {
        this.name = name;
    }
}
// class Research

class Research {
    // constructor(relationships) {
    //     let relations = relationships.data;
    //     // find all children of John
    //     for (let rel of relations.filter(r => r.from.name == 'John' && r.type === Relations.parent)) {
    //         console.log(`John has a child named ${rel.to.name}`)
    //     }
    // }
    constructor(browser) {
        for(let p of browser.findAllChildrenOf('John')) {
            console.log(`John has a child named ${p.name}`)
        }
    }
}

// LOW-LEVEL MODULE 
class RelationshipsBrowser { 
    constructor() {
        if(this.constructor.name == 'RelationshipsBrowser') {
            throw new Error("RelationshipBrowser is abstract")
        }
    }
    findAllChildrenOf(name) {}
}
class Relationships  extends RelationshipsBrowser{ 
    constructor() {
        super()
        this.data = [];
    }
    addParentAndChild(parent, child) {
        this.data.push({
            from:parent,
            type:Relations.parent,
            to: child
        });
        this.data.push({
            from:child,
            type: Relations.child,
            to: parent
        })
    }
    findAllChildrenOf(name) {
       
        return this.data.filter(r => r.from.name === name && r.type === Relations.parent).map(r => r.to)
    }
}

let parent = new Person('John');
let child = new Person('Tom')
let child2 = new Person("Mat")

let rels = new Relationships()
rels.addParentAndChild(parent,child)
rels.addParentAndChild(parent,child2)

new Research(rels)
