let cb = new CodeBuilder('Person')
cb.addField('name').addField('age')
console.log(cb.toString())

// expect out put above
class Person { 
    constructor(name,age) {
        this.name = name;
        this.age = age;
    }
}