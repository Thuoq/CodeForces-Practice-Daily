// Creational 
// Builder 
// factories => abstract factory , factory method => prototype => singleton 
const fs = require('fs')
class Journal{
    constructor() {
        this.entries = {}
    }
    addEntry(text) { 
        let c =++ Journal.count 
        let entry = `${c}: ${text}`
        this.entries[c] = entry
        return c;
    }
    removeEntry(index) {
        delete this.entries[index]
    }
    toString() {
        return Object.values(this.entries).join("\n")
    }
    save(filename) {
        fs.writeFileSync(filename,this.toString())
    }

    load(filename) {
        // 
    }
    loadFromUrl(url) {
         
    }
}
class PersistenceManager{ 
    preprocess(j) {

    }
    saveToFile(journal,filename) {
        fs.writeFileSync(filename,journal.toString())
    }
}
Journal.count = 0

let j = new Journal()
j.addEntry("I am investment ")
j.addEntry("I am student")
console.log(j.toString())
let p = new PersistenceManager()
fileName = "./journal.txt"
p.saveToFile(j,fileName)
//separation of concerns