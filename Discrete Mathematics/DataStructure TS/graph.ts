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
const list_words: string[] = fs.readFileSync('../sgb-words-test.txt', 'utf-8').split('\n')

// Add Vertex 

for (let word of list_words) {
   
    const nodePattern = myGraph.isPattern(word)
    myGraph.addVertex(word);
    if (nodePattern) {
        myGraph.addEdge(word,nodePattern)
    }
}

// myGraph.addVertex('0');
// myGraph.addVertex('1');
// myGraph.addVertex('2');
// myGraph.addVertex('3');
// myGraph.addVertex('4');
// myGraph.addVertex('5');
// myGraph.addVertex('6');
// myGraph.addEdge('3', '1');
// myGraph.addEdge('3', '4');
// myGraph.addEdge('4', '2');
// myGraph.addEdge('4', '5');
// myGraph.addEdge('1', '2');
// myGraph.addEdge('1', '0');
// myGraph.addEdge('0', '2');
// myGraph.addEdge('6', '5');

myGraph.showConnections();