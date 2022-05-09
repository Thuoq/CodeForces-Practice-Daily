// // ================================
// // Static

// class ClassWithPrivateField { 
//     #privateFiled;
// }
// class ClassWithPrivateMethod {
//     #privateMethod() {
//         return "Private Method"
//     }
// }

// class ClassWithPrivateStaticFiled { 
//     static #PRIVATE_STATIC_FIELD;
// }

// class CLassWithPrivateStaticMethod {
//     static #privateStaticMethod() {
//         return 'Private Static Method'
//     }   
// }

// ===================================

class ClassWithPrivateField { 
    #privateField;
    constructor () {
       
        this.#privateField = 42
    }
}
class SubClass extends ClassWithPrivateField  { 
    #subPrivateField;
    constructor() {
        super()
        this.#subPrivateField =23
        
    }
    // getMethods() {
    //     return this.#privateField 
    // }
}

console.log( new SubClass())