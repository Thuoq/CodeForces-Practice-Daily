
class Document { 

}

class Machine { 
    constructor() {
        if(this.constructor.name === 'Machine') {
            throw Error('Machine is abstract !')
        } 
    }
    print(doc){}
    fax(doc) {}
    scan(doc) {}
}
class MultiFunctionPrinter extends Machine { 
    print(doc) {}
    fax(doc) {}
    scan(doc) {
        throw Error("Not Implementtined ")
    }
}
class NotImplementedError extends Error { 
    constructor(name) {
        let msg = `${name} is not implemented`
        super(msg);
        if(Error.captureStackTrace){ 
            Error.captureStackTrace(this,NotImplementedError)
        }
    } 
}
// ISP = Segregate ( split up) people get data user need
class OldFashinPrinter extends Machine { 
    print(doc) {}
    fax(doc) {}
    scan(doc) {
        throw Error("Not Implementtined ")
    }
}
let oldPrint = new OldFashinPrinter()
oldPrint.scan()