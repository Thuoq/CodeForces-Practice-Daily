from get_words import get_words
class GraphDirected():
    def __init__(self):
        self.adjacentList = {}
        self.numberOfNodes = 0
        self.vertex_visited= {}
    def addVertex(self, node):
        self.adjacentList[node] = []
        self.numberOfNodes += 1
        return self.adjacentList

    def get_all_nodes(self):
        return list(self.adjacentList.keys())
    def addEdge(self,node1,node2):
        """
        @params: (node1) -> (node2) ->  (nod3)
        """
        self.adjacentList[node1].append(node2)
    def showConnections(self):
        allNodes = self.get_all_nodes()
        for node in allNodes[:1000]:
            nodeConnections = self.adjacentList[node]
            connections = ""
            for vertex in nodeConnections:
                connections += str(vertex) + " "
            print(str(node) + "-->" + connections)

    def is_four_character(self,wordU,wordV):
        temp = 0
        for idx,character in enumerate(wordU):
            if idx > 0 and character in wordV:
                temp+=1
                wordV = wordV.replace(character,'',1)
            if temp == 4:
                return True
        return False


    def init_visited_vertex(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            self.vertex_visited[node] = False
        return self.vertex_visited
    def DFS(self, v,visited):
        visited[v] = True
        for i in self.adjacentList[v]:
            if not visited[i]:
                self.DFS(i,visited)
        
    def fillOrder(self, vertex,visited, stack):
        visited[vertex] = True
        for ver in self.adjacentList[vertex]:
            if  visited[ver] == False:
                self.fillOrder(ver,visited, stack)
        stack = stack.append(vertex)
    def getTranspose(self):
        g = GraphDirected()
        words = get_words()
        for word in words:
            g.addVertex(word)
        for i in self.adjacentList:
            for j in self.adjacentList[i]:
                g.addEdge(j, i)
        return g
    def printSCCs(self): 
        count_strongly_component = 0
        stack = [] 
        visited = self.init_visited_vertex()
   
        for vertex in self.adjacentList:
            if visited[vertex] == False:
                self.fillOrder(vertex,visited, stack)
        gr = self.getTranspose() 

        visited = self.init_visited_vertex()
        while stack: 
            ver = stack.pop()
            if  visited[ver] == False:
                gr.DFS(ver,visited)
                count_strongly_component+=1
        print(count_strongly_component)

    def elements_between_two_vertexes(self, vertex_start, vertex_end):
        # Base case
        if vertex_start == vertex_end:
            return []
        elements_thoughs = []
        visited = self.init_visited_vertex()
        queue = []
        visited[vertex_start] = True
        queue.append(vertex_start)
        while (len(queue) > 0):
            vertex = queue.pop(0)
            for ver in self.adjacentList[vertex]:
                if ver == vertex_end:
                    return elements_thoughs
                if not visited[ver]:
                    elements_thoughs.append(ver)
                    visited[ver] = True
                    queue.append(ver)
        return None

    
        
           
            
