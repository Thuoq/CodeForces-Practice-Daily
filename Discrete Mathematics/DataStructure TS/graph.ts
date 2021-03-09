import fs from 'fs'
import { adjacentListI} from './graph.interface'
class Graph {
    numberOfNodes:number
    adjacentList: adjacentListI
    constructor() {
        this.numberOfNodes = 0;
        this.adjacentList = {
        };
    }
    
    addVertex(node:string): adjacentListI {
        this.adjacentList[node] = []
    
        this.numberOfNodes++;
        return this.adjacentList
    }
    addEdge(node1:string, node2:string) {
        //undirected Graph 
        this.adjacentList[node1].push(node2)
        this.adjacentList[node2].push(node1)
        return this.adjacentList[node1]
    }
    isPattern(node1:string) {
        const allNodes = Object.keys(this.adjacentList);
        let temp  = 0 ;
        for(let node of allNodes) {
            for (let char of node ) {
                if (node1.includes(char)) {
                    temp +=1;
                    if (temp == 4) {
                        return node;
                    }
                }
            }
        }
        return null;
    }
    showConnections() {
        const allNodes = Object.keys(this.adjacentList);
        for (let node of allNodes) {
            let nodeConnections = this.adjacentList[node];
            let connections = "";
            let vertex;
            for (vertex of nodeConnections) {
                connections += vertex + " ";
            }
            console.log(node + "-->" + connections);
        }
        console.log(this.adjacentList)
    }
}
// const wordsList:string[] = []


// Init Graph
const myGraph = new Graph();
const list_words: string[] = fs.readFileSync('../sgb-words.txt', 'utf-8').split('\n')

// Add Vertex 
console.log(list_words.slice(0,10))
// for (let word of list_words) {
//     const nodePattern = myGraph.isPattern(word)
//     myGraph.addVertex(word);
//     if (nodePattern) {
//         myGraph.addEdge(word,nodePattern)
//     }
// }

myGraph.showConnections();