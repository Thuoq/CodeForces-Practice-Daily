
class GraphUndirected():
    def __init__(self):
        self.numberOfNodes = 0 
        self.adjacentList = {}
        self.vertex_visited = {} 
    
    def addVertex(self,node):
        self.adjacentList[node] = []
        self.numberOfNodes+=1
        return self.adjacentList
    
    def addEdge(self,node1, node2):
        self.adjacentList[node1].append(node2)
        self.adjacentList[node2].append(node1)
        return self.adjacentList[node1]
    
    def showConnections(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            nodeConnections = self.adjacentList[node]
            connections = ""
            for vertex in nodeConnections:
                connections += str(vertex) + " "
            print(str(node) + "-->" + connections)
        
        # print(self.adjacentList)
    def is_the_sample_unique_character(self,word1,word2):
        temp = 0
        for idx in  range(len(word1)):
            if(word1[idx] != word2[idx]):
                temp +=1
            if temp > 1:
                return False
        return True
    
    def isPattern(self,node1):
        allNodes = self.get_all_nodes()

        list_words = []
        for node in allNodes:
            if self.is_the_sample_unique_character(node,node1):
                list_words.append(node)
        return list_words
    
    def init_visited_vertex(self):
        allNodes = self.get_all_nodes()
        for node in allNodes:
            self.vertex_visited[node] = False
        return self.vertex_visited
   
        
    def dfs(self):
        cc = 0
        allNodes = self.get_all_nodes()
        vertex_visited = self.init_visited_vertex()
        for node in allNodes:
            if not vertex_visited[node]:
                cc +=1
                self.expolore(node,self.adjacentList[node])
        print(cc)
    def expolore(self,node,graph):
        self.vertex_visited[node] = True
        for edge in graph:
            if not self.vertex_visited[edge]:
                self.expolore(edge, self.adjacentList[edge])
        
    def get_all_nodes(self):
        return list(self.adjacentList.keys())
    def elements_between_two_vertexes(self,vertex_start, vertex_end):
        # Base case
        if vertex_start == vertex_end:
            return []
        elements_thoughs= []
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
