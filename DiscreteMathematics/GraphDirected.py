class GraphDirected():
    def __init__(self):
        self.adjacentList = {}
        self.numberOfNodes = 0
        self.vertex_visited={}
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
        for node in allNodes:
            nodeConnections = self.adjacentList[node]
            connections = ""
            for vertex in nodeConnections:
                connections += str(vertex) + " "
            print(str(node) + "-->" + connections)

    def is_four_character(self,word1,word2):
        temp = 0
        for idx,character in enumerate(word1):
            if idx >= 1 and character in word2:
                temp+=1
                if temp ==4:
                    return True
        return False
    
    def is_pattern(self,word_add):
        allNodes = self.get_all_nodes()
        list_words = []
        for word in allNodes:
            if self.is_four_character(word_add,word):
                list_words.append(word)
        return list_words

    def init_visited_vertex(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            self.vertex_visited[node] = False
        return self.vertex_visited
    def DFSUtil(self, v, visited):
        visited[v] = True
        for i in self.adjacentList[v]:
            if visited[i] == False:
                self.DFSUtil(i, visited)
    def fillOrder(self, v, visited, stack):
        visited[v] = True
        for i in self.adjacentList[v]:
            if visited[i] == False:
                self.fillOrder(i, visited, stack)
        stack = stack.append(v)
    def getTranspose(self):
        g = GraphDirected()
        for i in self.adjacentList:
            for j in self.adjacentList[i]:
                g.addEdge(j, i)
        return g
    def printSCCs(self): 
        stack = [] 
        visited = self.init_visited_vertex()
        for i in range(self.numberOfNodes):
            if visited[i]==False: 
                self.fillOrder(i, visited, stack) 
  
        # Create a reversed graph 
        gr = self.getTranspose() 
           
        
        visited = self.init_visited_vertex()
  
    
        while stack: 
            i = stack.pop() 
            if visited[i]==False: 
                gr.DFSUtil(i, visited) 
           
